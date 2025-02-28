#pragma once
#include<string>
#include<fstream>


class Message 
{
public:
    Message();
    Message(std::string text, std::string sender, std::string receiver);
    friend std::fstream& operator >>(std::fstream& is, Message& obj);
    friend std::ostream& operator <<(std::ostream& os, const Message& obj);

private:
    std::string _text;
    std::string _sender;
    std::string _receiver;
};