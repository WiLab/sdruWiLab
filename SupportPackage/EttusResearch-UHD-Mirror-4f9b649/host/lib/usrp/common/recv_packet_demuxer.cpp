//
// Copyright 2011 Ettus Research LLC
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

#include "recv_packet_demuxer.hpp"
#include <uhd/utils/msg.hpp>
#include <uhd/utils/byteswap.hpp>
#include <boost/thread/mutex.hpp>
#include <queue>
#include <deque>
#include <vector>

using namespace uhd;
using namespace uhd::usrp;
using namespace uhd::transport;

static UHD_INLINE boost::uint32_t extract_sid(managed_recv_buffer::sptr &buff){
    //ASSUME that the data is in little endian format
    return uhd::wtohx(buff->cast<const boost::uint32_t *>()[1]);
}

class recv_packet_demuxer_impl : public uhd::usrp::recv_packet_demuxer{
public:
    recv_packet_demuxer_impl(
        transport::zero_copy_if::sptr transport,
        const size_t size,
        const boost::uint32_t sid_base
    ):
        _transport(transport), _sid_base(sid_base), _queues(size)
    {
        /* NOP */
    }

    managed_recv_buffer::sptr get_recv_buff(const size_t index, const double timeout){
        boost::mutex::scoped_lock lock(_mutex);
        managed_recv_buffer::sptr buff;

        //there is already an entry in the queue, so pop that
        if (not _queues[index].wrapper.empty()){
            std::swap(buff, _queues[index].wrapper.front());
            _queues[index].wrapper.pop();
            return buff;
        }

        while (true){
            //otherwise call into the transport
            buff = _transport->get_recv_buff(timeout);
            if (buff.get() == NULL) return buff; //timeout

            //check the stream id to know which channel
            const size_t rx_index = extract_sid(buff) - _sid_base;
            if (rx_index == index) return buff; //got expected message

            //otherwise queue and try again
            if (rx_index < _queues.size()) _queues[rx_index].wrapper.push(buff);
            else UHD_MSG(error) << "Got a data packet with unknown SID " << extract_sid(buff) << std::endl;
        }
    }

private:
    transport::zero_copy_if::sptr _transport;
    const boost::uint32_t _sid_base;
    boost::mutex _mutex;
    struct channel_guts_type{
        channel_guts_type(void): wrapper(container){}
        std::deque<managed_recv_buffer::sptr> container;
        std::queue<managed_recv_buffer::sptr> wrapper;
    };
    std::vector<channel_guts_type> _queues;
};

recv_packet_demuxer::sptr recv_packet_demuxer::make(transport::zero_copy_if::sptr transport, const size_t size, const boost::uint32_t sid_base){
    return sptr(new recv_packet_demuxer_impl(transport, size, sid_base));
}
