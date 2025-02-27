#pragma once
#include<string>

class Message 
{
public:
    Message();
    Message(std::string text, std::string sender, std::string receiver);

private:
    std::string _text;
    std::string _sender;
    std::string _receiver;
};