#include <iostream> 
#include <fstream>
#include <filesystem>
#include <vector>
#include "message.h"
#include "user.h"
#include "in_and_out_file.h"

namespace fs = std::filesystem;

int main() {
	std::fstream userfile("all_user.txt", std::ios::in | std::ios::out);
	std::fstream messagefile("all_message.txt", std::ios::in | std::ios::out);
	
	if (!userfile.is_open()) {
		userfile = std::fstream("all_user.txt", std::ios::in | std::ios::out | std::ios::trunc);
		fs::permissions("all_user.txt", fs::perms::none | fs::perms::owner_all);
	}

	if (!messagefile.is_open()) {
		messagefile = std::fstream("all_message.txt", std::ios::in | std::ios::out | std::ios::trunc);
		fs::permissions("all_message.txt", fs::perms::none | fs::perms::owner_all);
	}

	std::vector <Message> vectorMessage;
	std::vector <User> vectorUser;
	
	if (fs::file_size(fs::path("all_user.txt")) > 0) {
		userfile.seekg(0,std::ios_base::beg);
		in_vector_user(userfile, vectorUser);
	}
	
	if (fs::file_size(fs::path("all_message.txt")) > 0) {
		messagefile.seekg(0, std::ios_base::beg);
		in_vector_message(messagefile, vectorMessage);
	}

	std::string s1;
	std::string s2;
	std::string s3;

	short int x;
	while (true) {

		std::cout << "1) Add user" << std::endl;
		std::cout << "2) Add message" << std::endl;
		std::cout << "3) All user" << std::endl;
		std::cout << "4) All message" << std::endl;
		std::cout << "0) Exit" << std::endl;

		std::cin>> x;
		switch (x)
		{
		case 0:
			break;
		case 1:

			std::cout << "Print <name>" << std::endl;
			std::cin >> s1;
			std::cout << "Print <login>" << std::endl;
			std::cin >> s2;
			std::cout << "Print <password>" << std::endl;
			std::cin >> s3;
	
			vectorUser.emplace_back(s1, s2, s3);
			continue;
		case 2:
		
			std::cout << "Print <text>" << std::endl;
			std::cin >> s1;
			std::cout << "Print <sender>" << std::endl;
			std::cin >> s2;
			std::cout << "Print <receiver>" << std::endl;
			std::cin >> s3;

			vectorMessage.emplace_back(s1, s2, s3);
			continue;
		case 3:

			for (auto& a : vectorUser) {
				std::cout << a << std::endl;
			}
			continue;
		case 4:

			for (auto& a : vectorMessage) {
				std::cout << a << std::endl;
			}
			continue;
		default:
			continue;
		}
		break;
	}
	
	userfile.seekg(0, std::ios_base::beg);
	messagefile.seekg(0, std::ios_base::beg);
	
	in_file_message(messagefile, vectorMessage);
	in_file_user(userfile, vectorUser);

	userfile.close();
	messagefile.close();

	return 0;
}
