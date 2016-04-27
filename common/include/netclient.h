/************************************************************************/
/* 
	DESC:	TCP¿Í»§¶Ë.
	DATE:	2016-04-27
	AUTHOR:	YUANLS
*/
/************************************************************************/

#ifndef __NETCLIENT_H__
#define __NETCLIENT_H__

#include "ace/Singleton.h"
#include "include/bizinterface.h"
#include "include/packinterface.h"
#include "include/defines.h"


class AM_EXPORT NetClient
{
public:
	void	start(BizInterface* biz,PackInterface* pack);
	void	close();
	int		sendData(char* data,int length,int msgtype);
};
typedef ACE_Singleton<NetClient, ACE_Recursive_Thread_Mutex> App_Client;

#endif