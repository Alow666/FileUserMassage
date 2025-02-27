#include "user.h"

User::User() {
    _name = "";
    _login = "";
    _pass = "";
}

User::User(std::string name, std::string login, std::string pass):
   _name(name),
   _login(login),
   _pass(pass){}