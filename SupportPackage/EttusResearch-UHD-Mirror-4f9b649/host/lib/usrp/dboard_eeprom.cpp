//
// Copyright 2010-2011 Ettus Research LLC
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#include <uhd/usrp/dboard_eeprom.hpp>
#include <uhd/exception.hpp>
#include <uhd/utils/log.hpp>
#include <boost/foreach.hpp>
#include <boost/format.hpp>
#include <boost/lexical_cast.hpp>
#include <algorithm>
#include <sstream>

using namespace uhd;
using namespace uhd::usrp;

/***********************************************************************
 * Utility functions
 **********************************************************************/

//! create a string from a byte vector, return empty if invalid ascii
static const std::string bytes_to_string(const byte_vector_t &bytes){
    std::string out;
    BOOST_FOREACH(boost::uint8_t byte, bytes){
        if (byte < 32 or byte > 127) return out;
        out += byte;
    }
    return out;
}

//! create a byte vector from a string, null terminate unless max length
static const byte_vector_t string_to_bytes(const std::string &string, size_t max_length){
    byte_vector_t bytes;
    for (size_t i = 0; i < std::min(string.size(), max_length); i++){
        bytes.push_back(string[i]);
    }
    if (bytes.size() < max_length - 1) bytes.push_back('\0');
    return bytes;
}

////////////////////////////////////////////////////////////////////////
// format of daughterboard EEPROM
// 00: 0xDB code for ``I'm a daughterboard''
// 01:   .. Daughterboard ID (LSB)
// 02:   .. Daughterboard ID (MSB)
// 03:   .. io bits  7-0 direction (bit set if it's an output from m'board)
// 04:   .. io bits 15-8 direction (bit set if it's an output from m'board)
// 05:   .. ADC0 DC offset correction (LSB)
// 06:   .. ADC0 DC offset correction (MSB)
// 07:   .. ADC1 DC offset correction (LSB)
// 08:   .. ADC1 DC offset correction (MSB)
//  ...
// 1f:   .. negative of the sum of bytes [0x00, 0x1e]

#define DB_EEPROM_MAGIC         0x00
#define DB_EEPROM_MAGIC_VALUE   0xDB
#define DB_EEPROM_ID_LSB        0x01
#define DB_EEPROM_ID_MSB        0x02
#define DB_EEPROM_REV_LSB       0x03
#define DB_EEPROM_REV_MSB       0x04
#define DB_EEPROM_OFFSET_0_LSB  0x05 // offset correction for ADC or DAC 0
#define DB_EEPROM_OFFSET_0_MSB  0x06
#define DB_EEPROM_OFFSET_1_LSB  0x07 // offset correction for ADC or DAC 1
#define DB_EEPROM_OFFSET_1_MSB  0x08
#define DB_EEPROM_SERIAL        0x09
#define DB_EEPROM_SERIAL_LEN    0x09 //9 ASCII characters
#define DB_EEPROM_CHKSUM        0x1f

#define DB_EEPROM_CLEN          0x20 // length of common portion of eeprom

#define DB_EEPROM_CUSTOM_BASE   DB_EEPROM_CLEN // first avail offset for
                                               //   daughterboard specific use
////////////////////////////////////////////////////////////////////////

//negative sum of bytes excluding checksum byte
static boost::uint8_t checksum(const byte_vector_t &bytes){
    int sum = 0;
    for (size_t i = 0; i < std::min(bytes.size(), size_t(DB_EEPROM_CHKSUM)); i++){
        sum -= int(bytes.at(i));
    }
    UHD_LOGV(often) << boost::format("sum: 0x%02x") % sum << std::endl;
    return boost::uint8_t(sum);
}

dboard_eeprom_t::dboard_eeprom_t(void){
    id = dboard_id_t::none();
    serial = "";
}

void dboard_eeprom_t::load(i2c_iface &iface, boost::uint8_t addr){
    byte_vector_t bytes = iface.read_eeprom(addr, 0, DB_EEPROM_CLEN);

    std::ostringstream ss;
    for (size_t i = 0; i < bytes.size(); i++){
        ss << boost::format(
            "eeprom byte[0x%02x] = 0x%02x") % i % int(bytes.at(i)
        ) << std::endl;
    }
    UHD_LOGV(often) << ss.str() << std::endl;

    try{
        UHD_ASSERT_THROW(bytes.size() >= DB_EEPROM_CLEN);
        UHD_ASSERT_THROW(bytes[DB_EEPROM_MAGIC] == DB_EEPROM_MAGIC_VALUE);
        UHD_ASSERT_THROW(bytes[DB_EEPROM_CHKSUM] == checksum(bytes));

        //parse the ids
        id = dboard_id_t::from_uint16(0
            | (boost::uint16_t(bytes[DB_EEPROM_ID_LSB]) << 0)
            | (boost::uint16_t(bytes[DB_EEPROM_ID_MSB]) << 8)
        );

        //parse the serial
        serial = bytes_to_string(
            byte_vector_t(&bytes.at(DB_EEPROM_SERIAL),
            &bytes.at(DB_EEPROM_SERIAL+DB_EEPROM_SERIAL_LEN))
        );

        //parse the revision
        const boost::uint16_t rev_num = 0
            | (boost::uint16_t(bytes[DB_EEPROM_REV_LSB]) << 0)
            | (boost::uint16_t(bytes[DB_EEPROM_REV_MSB]) << 8)
        ;
        if (rev_num != 0 and rev_num != 0xffff){
            revision = boost::lexical_cast<std::string>(rev_num);
        }

    }catch(const uhd::assertion_error &){
        id = dboard_id_t::none();
        serial = "";
    }
}

void dboard_eeprom_t::store(i2c_iface &iface, boost::uint8_t addr) const{
    byte_vector_t bytes(DB_EEPROM_CLEN, 0); //defaults to all zeros
    bytes[DB_EEPROM_MAGIC] = DB_EEPROM_MAGIC_VALUE;

    //load the id bytes
    bytes[DB_EEPROM_ID_LSB] = boost::uint8_t(id.to_uint16() >> 0);
    bytes[DB_EEPROM_ID_MSB] = boost::uint8_t(id.to_uint16() >> 8);

    //load the serial bytes
    byte_vector_t ser_bytes = string_to_bytes(serial, DB_EEPROM_SERIAL_LEN);
    std::copy(ser_bytes.begin(), ser_bytes.end(), &bytes.at(DB_EEPROM_SERIAL));

    //load the revision bytes
    if (not revision.empty()){
        const boost::uint16_t rev_num = boost::lexical_cast<boost::uint16_t>(revision);
        bytes[DB_EEPROM_REV_LSB] = boost::uint8_t(rev_num >> 0);
        bytes[DB_EEPROM_REV_MSB] = boost::uint8_t(rev_num >> 8);
    }

    //load the checksum
    bytes[DB_EEPROM_CHKSUM] = checksum(bytes);

    iface.write_eeprom(addr, 0, bytes);
}
