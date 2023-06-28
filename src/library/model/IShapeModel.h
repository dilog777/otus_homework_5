#pragma once

#include <list>
#include <memory>

#include "Observable.h"
#include "Shape.h"

using ShapePtr = std::shared_ptr<Shape>;
using ShapeList = std::list<ShapePtr>;



class IShapeModel : public Observable
{
public:
	virtual ~IShapeModel() = default;

	virtual void clear() = 0;

	virtual const ShapeList shapes() const = 0;
	virtual void addShape(ShapePtr &shape) = 0;
	virtual void removeShape(ShapePtr &shape) = 0;
};
