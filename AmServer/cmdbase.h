/************************************************************************/
/* 
		DESC:	业务逻辑处理基类.
		DATE:	2016-04-20
		AUTHOR:	YUANLS
*/
/************************************************************************/

#ifndef __CMDBASE_H__
#define __CMDBASE_H__

#include "include/defines.h"
#include "include/structs.h"
#include "include/tcpserver.h"
#include "include/netclient.h"

#include <string>
using namespace std;

class CmdBase
{
public:
	virtual void		exec(sClientMsg* msg) = 0;
};

#endif