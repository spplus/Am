/************************************************************************/
/* 
	DESC:	日志接口.
	DATE:	2016-04-26
	AUTHOR:	YUANLS	
*/
/************************************************************************/
#ifndef __EXTLOG_H__
#define __EXTLOG_H__

#include <ace/Mutex.h>
#include <stdarg.h>
#include "include/defines.h"

class  ExpLog	
{
public:
	static ExpLog* instance();
	static void	   unInstance();

	void	start(char* logname);

	void	error(const char * fmt, ...);

	void	warn(const char * fmt, ...);

	void	message(const char * fmt, ...);

	void	debug(const char * fmt, ...);

private:
	ExpLog();

private:
	ACE_Mutex			m_mutex;
	static ExpLog*		m_inst;
};

#endif