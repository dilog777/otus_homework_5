#include "ShapeLine.h"

#include "../view/IShapeViwer.h"



class ShapeLine::Impl
{
public:
	Impl(double x1, double y1, double x2, double y2);

	double _x1;
	double _y1;
	double _x2;
	double _y2;
};



ShapeLine::Impl::Impl(double x1, double y1, double x2, double y2)
	: _x1{ x1 }
	, _y1{ y1 }
	, _x2{ x2 }
	, _y2{ y2 }
{
}



ShapeLine::ShapeLine(double x1, double y1, double x2, double y2)
	: _impl{ new Impl(x1, y1, x2, y2) }
{
}



ShapeLine::~ShapeLine()
{
	delete _impl;
}



void ShapeLine::draw(IShapeViewer *viewer) const
{
	viewer->drawLine(_impl->_x1, _impl->_y1, _impl->_x2, _impl->_y2);
}
