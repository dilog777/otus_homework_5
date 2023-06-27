#include "Observable.h"

#include "IObserver.h"



void Observable::addObserver(IObserver *observer)
{
	_observers.push_back(observer);
}



void Observable::removeObserver(IObserver *observer)
{
	_observers.remove(observer);
}



void Observable::notifyUpdate()
{
	for (auto &observer : _observers)
		observer->update();
}
