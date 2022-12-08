#pragma once
#include "sqlite/sqlite3.h"
#include <iostream>
#include <string>
using namespace std;
#ifndef _DATABASE_H_
#define _DATABASE_H_
namespace insertdb {
	class DataBase
	{
	private:
		string name;
		string email;
		string password;
		string data;
		string idUser;
		string idNote;
		const string quote = "\'";
		
	public:
		 string SEdata;
		 void insertDataUser(string name, string email, string password);
		 void insertDataNotes(string data, string idUser, string idNote);
	};
	int selectData(string selcetion, string wh);
	int callback(void* NotUSed, int argc, char** argv, char** azColName);
}
#endif // !_DATABASE_H_




