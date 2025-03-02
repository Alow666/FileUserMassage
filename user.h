#pragma once
#include<string>
#include<fstream>

class User 
{
public:
    User();
    User(std::string name, std::string login, std::string pass);
    friend std::fstream& operator >>(std::fstream& is, User& obj);
    friend std::ostream& operator <<(std::ostream& os, const User& obj);
    friend std::iostream& operator <<(std::iostream& out, const User& obj);

private:
    std::string _name;
    std::string _login;
    std::string _pass;
};