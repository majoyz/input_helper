 ///
 /// @file    Socket.h
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2015-11-04 17:25:32
 ///

#ifndef __WD_SOCKET_H
#define __WD_SOCKET_H

#include "Noncopyable.h"

namespace wd
{
class InetAddress;
class Socket : Noncopyable//不可复制
{
public:
	Socket(int sockfd);
	Socket();
	~Socket();

	void shutdownWrite();
	int fd()const{	return sockfd_;	}

	void nonblock();

	static InetAddress getLocalAddr(int sockfd);//静态函数，也可以放到通用类SocketUtil里
	static InetAddress getPeerAddr(int sockfd);
private:
	int sockfd_;
};
}// end of namespace wd

#endif
