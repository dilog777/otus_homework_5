#include "ShapeRectangle.h"

#include "../view/IShapeViwer.h"



class ShapeRectangle::Impl
{
public:
	Impl(double x, double y, double width, double height);

	double _x;
	double _y;
	double _width;
	double _height;
};



ShapeRectangle::Impl::Impl(double x, double y, double width, double height)
	: _x { x }
	, _y { y }
	, _width { width }
	, _height { height }
{
}



ShapeRectangle::ShapeRectangle(double x, double y, double width, double height)
	: _impl { new Impl(x, y, width, height) }
{
}



ShapeRectangle::~ShapeRectangle()
{
	delete _impl;
}



void ShapeRectangle::draw(IShapeViewer *viewer) const
{
	viewer->drawRect(_impl->_x, _impl->_y, _impl->_width, _impl->_height);
}
