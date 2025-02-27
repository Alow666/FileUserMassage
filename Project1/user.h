#pragma once
#include <string>

class User 
{
public:
    User();
    User(std::string name, std::string login, std::string pass);

private:
    std::string _name;
    std::string _login;
    std::string _pass;
};