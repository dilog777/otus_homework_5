#pragma once

#include <string>
#include <memory>


class IUserInterface
{
public:
	virtual ~IUserInterface() = default;

	virtual void showMessage(const std::string &message) const = 0;
	virtual bool confirmUser(const std::string &question) const = 0;
	virtual std::string askUser(const std::string &question) const = 0;
};

using IUserInterfacePtr = std::shared_ptr<IUserInterface>;
