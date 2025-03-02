#pragma once
#include <fstream>
#include "message.h"
#include "user.h"
#include <vector>

void in_file_user(std::fstream& file, std::vector<User>& userVector);
void in_file_message(std::fstream& file, std::vector<Message>& messageVector);
void in_vector_user(std::fstream& file, std::vector<User>& userVector);
void in_vector_message(std::fstream& file, std::vector<Message>& messageVector);