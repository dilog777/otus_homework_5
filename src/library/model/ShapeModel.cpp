#include "ShapeModel.h"

#include "Shape.h"



class ShapeModel::Impl
{
public:
	Impl();

	ShapeList _shapes;
};



ShapeModel::Impl::Impl()
{
}



ShapeModel::ShapeModel()
	: _impl { new Impl }
{
}



ShapeModel::~ShapeModel()
{
	delete _impl;
}



void ShapeModel::clear()
{
	_impl->_shapes.clear();
	notifyUpdate();
}



const ShapeList ShapeModel::shapes() const
{
	return _impl->_shapes;
}



void ShapeModel::addShape(ShapePtr &shape)
{
	_impl->_shapes.push_back(shape);
	notifyUpdate();
}



void ShapeModel::removeShape(ShapePtr &shape)
{
	_impl->_shapes.remove(shape);
	notifyUpdate();
}
