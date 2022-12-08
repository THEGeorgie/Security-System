#include <iostream>
#include "SecuritySystem.h"

#include <string>
using namespace std;



int main()
{
    logregister::SecuritySystem security;

    cout << "------------------------------------------------------" << endl;
    cout << "|                                                    |" << endl;
    cout << "|                 Security Dashboard                 |" << endl;
    cout << "|                                                    |" << endl;
    cout << "------------------------------------------------------" << endl;

    cout << "Login/register (l/r): " << flush;
    char choice;
    cin >> choice; 
    string name;
    string email;
    string password;
    string tempPass;
    const string quote = "\'";





    /*
    sqlite3* DB;
    char* messaggeError;
    const char* s = "E:\\Projects\\Security-System\\Security-System\\DB\\DATABASE.db";
    int exit = sqlite3_open(s, &DB);

    string sql("INSER INTO Users (name, email, password) VALUES (" + quote + name + quote + ", " + quote + email + quote + ", " + quote + password + quote + ");");
    cout << sql;
    //string sql("INSERT INTO Users (name, email, password) VALUES('Adam', 'GATES@gmail.com', '40');");

    exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messaggeError);
    if (exit != SQLITE_OK) {
        std::cerr << "Error Insert" << std::endl;
        sqlite3_free(messaggeError);
    }
    else
        std::cout << "Records created Successfully!" << std::endl;
*/







    switch (choice) {
    case 'l':
        cout << "Enter email: " << flush;
        cin >> email;
        cout << "Enter password: " << flush;
        cin >> password;
        security.verfiactionUSER(email, password);
        break;
    case'r':
        cout << "Enter name: " << flush;
        cin >> name;
        cout << "Enter Email: " << flush;
        cin >> email;
        cout << "Enter password: " << flush;
        cin >> password;
        cout << "Confirm password: " << flush;
        cin >> tempPass;
        security.creatingUSER(name, email, password, tempPass);
        break;
    default:
        cout << "Invaild Input!!" << endl;
        break;
    }
    return 0;
}


