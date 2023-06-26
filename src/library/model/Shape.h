#pragma once

class IShapeViewer;



class Shape
{
public:
	virtual ~Shape() = default;

	virtual void draw(IShapeViewer *viewer) const = 0;
};
