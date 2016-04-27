/************************************************************************/
/* 
		DESC:	�ͻ��˺ͷ�����֮��Э�����.
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

	// �ͻ���  <--> ������ ���
	virtual sClientMsg*		decoder(char* data,int datalength) = 0;

	// �ͻ���  <--> ������ ���
	virtual	char*			encoder(string data,int msgtype,int &outlengh) = 0;

	// ������  <--> SCADA ���
	virtual sClientMsg*		decoderS(char* data,int datalength) = 0;

	// ������  <--> SCADA ���
	virtual	char*			encoderS(char* data,int datalength,int &outlengh) = 0;

};


#endif