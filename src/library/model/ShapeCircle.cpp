#include "ShapeCircle.h"

#include "../view/IShapeViewer.h"



class ShapeCircle::Impl
{
public:
	Impl(double x, double y, double r);

	double _x;
	double _y;
	double _r;
};



ShapeCircle::Impl::Impl(double x, double y, double r)
	: _x { x }
	, _y { y }
	, _r { r }
{
}



ShapeCircle::ShapeCircle(double x, double y, double r)
	: _impl { new Impl(x, y, r) }
{
}



ShapeCircle::~ShapeCircle()
{
	delete _impl;
}



void ShapeCircle::draw(IShapeViewer *viewer) const
{
	viewer->drawCircle(_impl->_x, _impl->_y, _impl->_r);
}
