#include "ConsoleUserInterface.h"

#include <cassert>
#include <iostream>



void ConsoleUserInterface::showMessage(const std::string &message) const
{
	std::cout << message << std::endl;
}



bool ConsoleUserInterface::confirmUser(const std::string &question) const
{
	std::cout << question << std::endl;

	std::string answer;
	while (true)
	{
		std::cout << "Enter 'yes' or 'no': ";
		std::cin >> answer;

		if (answer == "yes")
			return true;

		if (answer == "no")
			return false;
	}

	assert(false);
	return false;
}



std::string ConsoleUserInterface::askUser(const std::string &question) const
{
	std::cout << question << std::endl;
	std::cout << "Enter answer: ";

	std::string answer;
	std::cin >> answer;
	return answer;
}
