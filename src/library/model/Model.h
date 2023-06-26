#pragma once

#include <memory>

#include "Shape.h"

using ShapePtr = std::shared_ptr<Shape>;



class Model
{
public:
	Model();
	~Model();

	void clear();

	void addShape(ShapePtr &shape);

private:
	class Impl;
	Impl *_impl;
};
