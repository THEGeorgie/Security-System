#pragma once
#include "DataBase.h"
#ifndef _SECURTYSYSTEM_H_
#define _SECURTYSYSTEM_H_
namespace logregister {
	class SecuritySystem {
	private:
		string email;
		string password;
		string name;
	public:
		bool verfiactionUSER(string email, string password);
		bool creatingUSER(string name, string email, string password, string tempPass);
	};
}
#endif // !_SECURTYSYSTEM_H_


