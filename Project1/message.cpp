#include "message.h"

Message::Message() {
    _text = "";
    _sender = "";
    _receiver = "";
}

Message::Message(std::string text, std::string sender, std::string receiver) :
    _text(text),
    _sender(sender),
    _receiver(receiver) {}
