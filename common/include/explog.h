/************************************************************************/
/* 
	DESC:	日志接口.
	DATE:	2016-04-26
	AUTHOR:	YUANLS	
*/
/************************************************************************/

#include <ace/Mutex.h>
#include <stdarg.h>

#ifdef AM_BUILD_DLL
#define DLL_PUBLIC __declspec(dllexport)
#else
#define DLL_PUBLIC __declspec(dllimport) // Note: actually gcc seems to also supports this syntax.
#endif

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