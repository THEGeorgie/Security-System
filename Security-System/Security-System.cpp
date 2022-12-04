#include <iostream>
#include "SecuritySystem.h"

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


