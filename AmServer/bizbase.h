/************************************************************************/
/* 
		DESC:	ҵ���߼����������.���ݲ�ͬ����Ϣ���ͣ��ֱ𴴽���ͬ��ҵ��
					����Ԫ���д���.
		DATE:	2016-04-20
		AUTHOR:	YUANLS
*/
/************************************************************************/

#ifndef		__BIZBASE_H__
#define		__BIZBASE_H__

#include "include/bizinterface.h"

class BizBase	:public BizInterface
{
public:
	void		exec(sClientMsg* msg);

};

#endif