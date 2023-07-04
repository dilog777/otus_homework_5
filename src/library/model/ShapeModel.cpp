#include "ShapeModel.h"

#include <fstream>

#include "Shape.h"



class ShapeModel::Impl
{
public:
	ShapeList _shapes;
};



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



void ShapeModel::load(const std::string &filePath)
{
	clear();

	std::ifstream stream(filePath);
	if (stream.is_open())
	{
		// auto data << steam; // read from steam
		// auto shape = Shape::fromString(data);
		// addShape(shape);
	}
	stream.close();

	notifyUpdate();
}



void ShapeModel::save(const std::string &filePath)
{
	std::ofstream stream(filePath);
	if (stream.is_open())
	{
		//for (const auto &shape : _impl->_shapes)
		//{
		//	auto data = shape->toString();
		//	stream << data;
		//}
	}
	stream.close();
}



const ShapeList &ShapeModel::shapes() const
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



IShapeModel::Hash ShapeModel::calculateHash() const
{
	Hash hash = {};
	// Some calculations based on the data of all shapes
	return hash;
}
