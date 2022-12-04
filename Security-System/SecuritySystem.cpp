#include "SecuritySystem.h"
namespace logregister {
    bool SecuritySystem::creatingUSER(string name, string email, string password, string tempPass) {
        this->email = email;
        this->password = password;
        this->name = name;

        if (password != tempPass) {
            cout << "Password did not match" << endl;
            return false;
        }
        else {
            insertdb::DataBase db;
            db.insertDataUser(name, email, password);
            return true;
        }
    }

    bool SecuritySystem::verfiactionUSER(string email, string password) {
        this->email = email;
        this->password = password;

        string line;
        int currentLine = 0;
        insertdb::DataBase db;
        cout << db.SEdata << endl;
        return false;
        /*if (db.SEdata == email || db.SEdata == password) {
            cout << "Login Secsesfull" << endl;
        }
        else{
            cout << "Login failed!!!" << endl;
            return false;
        }
        */
    }
}
