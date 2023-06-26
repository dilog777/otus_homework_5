#include "Model.h"

#include <list>
#include <memory>

#include "Shape.h"



class Model::Impl
{
public:
	Impl();

	std::list<std::shared_ptr<Shape>> _shapes;
};



Model::Impl::Impl()
{
}



Model::Model()
	: _impl{ new Impl }
{
}



Model::~Model()
{
	delete _impl;
}



void Model::clear()
{
	_impl->_shapes.clear();
}



void Model::addShape(ShapePtr& shape)
{
	_impl->_shapes.push_back(shape);
}
