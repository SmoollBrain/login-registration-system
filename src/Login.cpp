// Custom headers
#include "Login.hpp"
#include "misc.hpp"

// C++ headers
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

// External headers
#include <json/json.h>

void Login::loginAccount()
{
	std::string email;
	std::string password;
	std::string username;
	std::string neededEmail;
	std::string neededPassword;
	Json::Value login;
	Json::Reader reader;
	
	if (!std::filesystem::exists("logins/"))
	{
		std::cout << "No registered users found! Please register first." << std::endl;
		Misc::sleep(2500);
		exit(1);
	}
	
	std::cout << "Email: ";
	getline(std::cin, email);
	
	password = Misc::getpasswd("Password: ", true);
	
	std::ifstream loginFile;
	if (!std::filesystem::exists("logins/" + email + ".json"))
	{
		std::cout << "\nNo registered users with the email \"" << email << "\"" << " were found!" << std::endl;
		Misc::sleep(1000);
		exit(1);
	} else
		loginFile.open("logins/" + email + ".json", std::ifstream::binary);
	
	reader.parse(loginFile, login, false);
	
	username 		= login["username"].asString();
	neededEmail 	= login["email"].asString();
	neededPassword 	= login["password"].asString();
	
	if (password != neededPassword)
	{
		std::cout << "\nInvalid password!" << std::endl;
		Misc::sleep(1000);
		exit(1);
	} else
	{
		std::cout << "\nWelcome \"" << username << "\"!" << std::endl;
	}
}