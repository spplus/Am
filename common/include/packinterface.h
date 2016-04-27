/************************************************************************/
/* 
		DESC:	客户端和服务器之间协议解析.
		DATE:	2016-04-20
		AUTHOR:	YUANLS
*/
/************************************************************************/
#ifndef __PACKINTERFACE_H__
#define __PACKINTERFACE_H__

#include "include/structs.h"
#include <string>

using namespace std;

class PackInterface
{
public:

	// 客户端  <--> 服务器 打包
	virtual sClientMsg*		decoder(char* data,int datalength) = 0;

	// 客户端  <--> 服务器 解包
	virtual	char*			encoder(string data,int msgtype,int &outlengh) = 0;

	// 服务器  <--> SCADA 打包
	virtual sClientMsg*		decoderS(char* data,int datalength) = 0;

	// 服务器  <--> SCADA 解包
	virtual	char*			encoderS(char* data,int datalength,int &outlengh) = 0;

};


#endif