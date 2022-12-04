#include "DataBase.h"
namespace insertdb {
	void DataBase::insertDataUser(string name, string email, string password) {
		const char* s = "Security-System\DB\DATABSE.db";
		this->name = name;
		char* messaggeError;
		sqlite3* db;
		int exit = sqlite3_open(s, &db);
		string na = "\"" + name + "\"";
		string em = "\"" + email + "\"";
		string pass = "\"" + password + "\"";

		string sql("INSER INTO Users (name, email, password) VALUES (" + na + " , " + em + " , " + pass + ");");

		exit = sqlite3_exec(db, sql.c_str(), NULL, 0, &messaggeError);
		if (exit != SQLITE_OK) {
			cout << "Incorect Input" << endl;
			sqlite3_free(messaggeError);
			sqlite3_close(db);

		}else {
			cout << "Account Created!!!" << endl;
			sqlite3_close(db);
		}

	}

	void DataBase::insertDataNotes(string data, string idUser, string idNote) {
		const char* s = "Security-System\DB\DATABSE.db";
		char* messaggeError;
		sqlite3* db;
		int exit = sqlite3_open(s, &db);
		string sql("INSER INTO Notes ( data, user_id) VALUES (" + idUser + "," + data + ")");

		exit = sqlite3_exec(db, sql.c_str(), NULL, NULL, &messaggeError);
		if (exit != SQLITE_OK) {
			cout << "Incorect Input" << endl;
			sqlite3_free(messaggeError);
		}
		else {
			cout << "Account Created!!!" << endl;
		}
	}

	int selectData(string selecetion, string wh) {
		sqlite3* db;
		DataBase call;
		int rc;
		char* zErrMsg = 0;
		const char* s = "Security-System\DB\DATABSE.db";
		int exit = sqlite3_open(s, &db);

		string sl = "\"" + selecetion + "\"";
		string whe = "\"" + wh + "\"";

		string sql = "SELECT "  + sl + " FROM User; WHERE " + whe + ";";

		rc = sqlite3_exec(db, sql.c_str(), callback, NULL, NULL);
		if (rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
			sqlite3_close(db);
		}
		else {
			fprintf(stdout, "Operation done successfully\n");
			sqlite3_close(db);
		}


		call.SEdata = sql;

		sqlite3_close(db);
		return 0;

	}

	int callback(void* NotUSed, int argc, char** argv, char** azColName) {

		for (int i = 0; i < argc; i++) {
			cout << azColName[i] << ": " << argv[i] << endl;
		}

		cout << endl;

		return 0;

	}
}