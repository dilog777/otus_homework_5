#pragma once

#include "Shape.h"



class ShapeCircle : public Shape
{
public:
	ShapeCircle(double x, double y, double r);
	~ShapeCircle();

	void draw(IShapeViewer *viewer) const override;

private:
	class Impl;
	Impl *_impl;
};
