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

#ifndef INCLUDED_LIBUHD_TRANSPORT_VRT_PACKET_HANDLER_HPP
#define INCLUDED_LIBUHD_TRANSPORT_VRT_PACKET_HANDLER_HPP

#include <uhd/config.hpp>
#include <boost/asio.hpp>

namespace uhd{ namespace transport{

    typedef boost::shared_ptr<boost::asio::ip::udp::socket> socket_sptr;

    /*!
     * Wait for the socket to become ready for a receive operation.
     * \param sock_fd the open socket file descriptor
     * \param timeout the timeout duration in seconds
     * \return true when the socket is ready for receive
     */
    UHD_INLINE bool wait_for_recv_ready(int sock_fd, double timeout){
        //setup timeval for timeout
        timeval tv;
        //If the tv_usec > 1 second on some platforms, select will
        //error EINVAL: An invalid timeout interval was specified.
        tv.tv_sec = int(timeout);
        tv.tv_usec = int(timeout*1000000)%1000000;

        //setup rset for timeout
        fd_set rset;
        FD_ZERO(&rset);
        FD_SET(sock_fd, &rset);

        //http://www.gnu.org/s/hello/manual/libc/Interrupted-Primitives.html
        //This macro is provided with gcc to properly deal with EINTR.
        //If not provided, define an empty macro, assume that is OK
        #ifndef TEMP_FAILURE_RETRY
            #define TEMP_FAILURE_RETRY(x) (x)
        #endif

        //call select with timeout on receive socket
        return TEMP_FAILURE_RETRY(::select(sock_fd+1, &rset, NULL, NULL, &tv)) > 0;
    }

}} //namespace uhd::transport

#endif /* INCLUDED_LIBUHD_TRANSPORT_VRT_PACKET_HANDLER_HPP */
