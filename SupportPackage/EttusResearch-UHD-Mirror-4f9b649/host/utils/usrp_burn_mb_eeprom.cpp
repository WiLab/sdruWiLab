//
// Copyright 2010 Ettus Research LLC
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

#include <uhd/utils/safe_main.hpp>
#include <uhd/device.hpp>
#include <uhd/property_tree.hpp>
#include <uhd/usrp/mboard_eeprom.hpp>
#include <boost/program_options.hpp>
#include <boost/format.hpp>
#include <iostream>

namespace po = boost::program_options;

int UHD_SAFE_MAIN(int argc, char *argv[]){
    std::string args, key, val;

    po::options_description desc("Allowed options");
    desc.add_options()
        ("help", "help message")
        ("args", po::value<std::string>(&args)->default_value(""), "device address args [default = \"\"]")
        ("key", po::value<std::string>(&key), "the indentifier for a value in EEPROM")
        ("val", po::value<std::string>(&val), "the new value to set, omit for readback")
    ;

    po::variables_map vm;
    po::store(po::parse_command_line(argc, argv, desc), vm);
    po::notify(vm);

    //print the help message
    if (vm.count("help") or not vm.count("key")){
        std::cout << boost::format("USRP Burn Motherboard EEPROM %s") % desc << std::endl;
        std::cout << boost::format(
            "Omit the value argument to perform a readback,\n"
            "Or specify a new value to burn into the EEPROM.\n"
        ) << std::endl;
        return ~0;
    }

    std::cout << "Creating USRP device from address: " + args << std::endl;
    uhd::device::sptr dev = uhd::device::make(args);
    uhd::property_tree::sptr tree = dev->get_tree();
    std::cout << std::endl;

    if (true /*always readback*/){
        std::cout << "Fetching current settings from EEPROM..." << std::endl;
        uhd::usrp::mboard_eeprom_t mb_eeprom = tree->access<uhd::usrp::mboard_eeprom_t>("/mboards/0/eeprom").get();
        if (not mb_eeprom.has_key(key)){
            std::cerr << boost::format("Cannot find value for EEPROM[%s]") % key << std::endl;
            return ~0;
        }
        std::cout << boost::format("    EEPROM [\"%s\"] is \"%s\"") % key % mb_eeprom[key] << std::endl;
        std::cout << std::endl;
    }
    if (vm.count("val")){
        uhd::usrp::mboard_eeprom_t mb_eeprom; mb_eeprom[key] = val;
        std::cout << boost::format("Setting EEPROM [\"%s\"] to \"%s\"...") % key % val << std::endl;
        tree->access<uhd::usrp::mboard_eeprom_t>("/mboards/0/eeprom").set(mb_eeprom);
        std::cout << "Power-cycle the USRP device for the changes to take effect." << std::endl;
        std::cout << std::endl;
    }

    std::cout << "Done" << std::endl;
    return 0;
}
