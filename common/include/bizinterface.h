/************************************************************************/
/* 
	DESC:	����ҵ�����߼��ӿ�.
	DATE:	2016-04-27
	AUTHOR:	YUANLS	
*/
/************************************************************************/
#ifndef __BIZINTERFACE_H__
#define __BIZINTERFACE_H__

#include "include/structs.h"

class BizInterface
{
public:
	virtual	void	exec(sClientMsg* msg) = 0;
};

#endif