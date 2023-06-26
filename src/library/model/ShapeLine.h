#pragma once

#include "Shape.h"



class ShapeLine : public Shape
{
public:
	ShapeLine(double x1, double y1, double x2, double y2);
	~ShapeLine();
	
	void draw(IShapeViewer *viewer) const override;

private:
	class Impl;
	Impl* _impl;
};
