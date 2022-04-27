// Custom headers
#include "Register.hpp"
#include "misc.hpp"

// C++ headers
#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>

// C headers
#include <printf.h>

// External includes
#include <json/json.h>

void Register::registerAccount()
{
	std::string email;
	std::string username;
	std::string password;
	
	if (!std::filesystem::exists("logins/"))
	{
		std::filesystem::create_directory("logins/");
	}
	
	std::cout << "Email: ";
	getline(std::cin, email);
	
	std::cout << "Username: ";
	getline(std::cin, username);
	
	password = Misc::getpasswd("Password: ", true);
	
	std::ofstream loginFile;
	
	loginFile.open("logins/" + email + ".json", std::ofstream::binary);
	
	Json::Value login;
	
	login["email"] 	  = email;
	login["password"] = password;
	login["username"] = username;
	
	loginFile << login;
	
	std::cout << "\nThank you for registering!" << std::endl;
	
	loginFile.close();
}