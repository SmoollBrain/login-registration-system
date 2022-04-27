// C++ headers
#include <iostream>
#include <string>
#include <fstream>

// Custom headers
#include "Login.hpp"
#include "Register.hpp"
#include "misc.hpp"

int main(int argc, char** argv)
{
	std::string loginOrRegister;
	
	std::cout << "Would you like to 'login' or 'register' ('exit' to exit the program): ";
	getline(std::cin, loginOrRegister);
	
	system("clear");
	
	if (loginOrRegister == "login")
		Login::loginAccount();
	else if (loginOrRegister == "register")
		Register::registerAccount();
	else if (loginOrRegister == "exit")
		exit(0);
	else
	{
		std::cout << "You need to input 'login' or 'register' dummy!" << std::endl;
		Misc::sleep(2500);
		return 1;
	}
	
	return 0;
}