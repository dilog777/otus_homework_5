#pragma once

#include "Shape.h"



class ShapeRectangle : public Shape
{
public:
	ShapeRectangle(double x, double y, double width, double height);
	~ShapeRectangle();

	void draw(IShapeViewer *viewer) const override;

private:
	class Impl;
	Impl *_impl;
};
