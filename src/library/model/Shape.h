#pragma once

#include <list>
#include <memory>

class IShapeViewer;



class Shape
{
public:
	virtual ~Shape() = default;

	virtual void draw(IShapeViewer *viewer) const = 0;
};

using ShapePtr = std::shared_ptr<Shape>;
using ShapeList = std::list<ShapePtr>;
