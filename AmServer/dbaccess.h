/************************************************************************/
/* 
	DESC:	数据库操作接口.
	DATE:	2016-04-21
	AUTHOR:	YUANLS	
*/
/************************************************************************/

#ifndef __DBACCESS_H__
#define __DBACCESS_H__
#include "ace/Singleton.h"
#include <vector>
#include <map>

#ifdef WIN32
#include <STDIO.H>
#include <WINSOCK.H>
#endif

#include <string>
#include "mysql.h"


using namespace std;

class DbAccess
{
public:

	DbAccess();

	// 加载数据库配置
	void			init();

	// 执行sql
	int				execSql(char* sql);

	// 查询列表
	vector<map<string,string> > getList(char* sql);

private:
	bool			conn2db();

private:

	MYSQL*	m_mysql;

	string	m_dbhost;
	string	m_dbuser;
	string	m_dbpwd;
	string	m_dbname;
	int		m_dbport;
};
typedef ACE_Singleton<DbAccess, ACE_Recursive_Thread_Mutex>  App_Dba;
#endif