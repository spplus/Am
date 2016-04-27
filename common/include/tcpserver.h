/************************************************************************/
/* 
	DESC:	TCP·þÎñÆ÷.
	DATE:	2016-04-27
	AUTHOR:	YUANLS
*/
/************************************************************************/

#ifndef __TCPSERVER_H__
#define __TCPSERVER_H__

#include <string>
#include "ace/Singleton.h"
#include "include/bizinterface.h"
#include "include/packinterface.h"
#include "include/defines.h"

using namespace std;

class AM_EXPORT TcpServer
{
public:

	void	start(BizInterface* biz,PackInterface* pack);
	void	close();
	int		sendData(const int connid,const string data,const int msgtype);

};
typedef ACE_Singleton<TcpServer, ACE_Recursive_Thread_Mutex> App_Server;

#endif