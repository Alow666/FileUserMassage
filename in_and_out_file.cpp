#include "in_and_out_file.h"

void in_file_user(std::fstream& file, std::vector<User>& userVector) {
	for (auto& obj : userVector) {
		file << obj << std::endl;
	}
}

void in_file_message(std::fstream& file, std::vector<Message>& messageVector) {
	for (auto& obj : messageVector) {
		file << obj << std::endl;
	}
}

void in_vector_user(std::fstream& file, std::vector<User>& userVector) {
	User a;
	while (file >> a) {
		userVector.push_back(a);
	}
}

void in_vector_message(std::fstream& file, std::vector<Message>& messageVector) {
	Message a;
	while (file >> a) {
		messageVector.push_back(a);
	}
}
