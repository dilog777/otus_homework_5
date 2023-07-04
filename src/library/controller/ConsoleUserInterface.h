#pragma once

#include "IUserInterface.h"



class ConsoleUserInterface : public IUserInterface
{
public:
	void showMessage(const std::string &message) const override;
	bool confirmUser(const std::string &question) const override;
	std::string askUser(const std::string &question) const override;
};
