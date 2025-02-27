#include <iostream> 
#include <fstream>
#include <string>
#include <filesystem>
#include "message.h"
#include "user.h"

namespace fs = std::filesystem;

int main() {
	std::fstream userfile("all_user.txt", std::ios::in | std::ios::out);
	std::fstream messagefile("all_message.txt", std::ios::in | std::ios::out);











	return 0;
}