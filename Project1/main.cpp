#include <iostream> 
#include <fstream>
#include <filesystem>
#include <vector>
#include <conio.h>
#include "message.h"
#include "user.h"
#include "in_and_out_file.h"

namespace fs = std::filesystem;

int main() {
	std::fstream userfile("all_user.txt", std::ios::in | std::ios::out);
	std::fstream messagefile("all_message.txt", std::ios::in | std::ios::out);
	fs::path filePathUser = "all_user.txt";
	fs::path filePathMessage = "all_message.txt";

	if (!userfile.is_open() || !messagefile.is_open()) {
		std::cout << "not open file!";
		return 1;
	}

	std::vector <Message> vectorMessage;
	std::vector <User> vectorUser;
	
	if (fs::file_size(filePathUser) > 0) {
		in_vector_user(userfile, vectorUser);
	}
	
	if (fs::file_size(filePathMessage) > 0) {
		in_vector_message(messagefile, vectorMessage);
	}

	







	in_file_message(messagefile, vectorMessage);
	in_file_user(userfile, vectorUser);

	userfile.close();
	messagefile.close();

	return 0;
}