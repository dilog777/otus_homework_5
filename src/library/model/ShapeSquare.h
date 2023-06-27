#pragma once

#include "Shape.h"



class ShapeSquare : public Shape
{
public:
	ShapeSquare(double x, double y, double size);
	~ShapeSquare() override;

	void draw(IShapeViewer *viewer) const override;

private:
	class Impl;
	Impl *_impl;
};
