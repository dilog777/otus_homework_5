#pragma once

#include <list>

class IObserver;



class Observable
{
public:
	void addObserver(IObserver *observer);
	void removeObserver(IObserver *observer);

	void notifyUpdate();

private:
	std::list<IObserver *> _observers;
};
