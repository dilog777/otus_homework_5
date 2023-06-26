#include "ShapeSquare.h"

#include "../view/IShapeViwer.h"



class ShapeSquare::Impl
{
public:
	Impl(double x, double y, double size);

	double _x;
	double _y;
	double _size;
};



ShapeSquare::Impl::Impl(double x, double y, double size)
	: _x{ x }
	, _y{ y }
	, _size{ size }
{
}



ShapeSquare::ShapeSquare(double x, double y, double size)
	: _impl{ new Impl(x, y, size) }
{
}



ShapeSquare::~ShapeSquare()
{
	delete _impl;
}



void ShapeSquare::draw(IShapeViewer *viewer) const
{
	viewer->drawRect(_impl->_x, _impl->_y, _impl->_size, _impl->_size);
}
