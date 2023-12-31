#pragma once

#include <memory>



class IShapeViewer
{
public:
	virtual ~IShapeViewer() = default;

	virtual void clear() = 0;
	virtual void drawCircle(double x, double y, double r) = 0;
	virtual void drawLine(double x1, double y1, double x2, double y2) = 0;
	virtual void drawRect(double x, double y, double width, double height) = 0;
};

using IShapeViewerPtr = std::shared_ptr<IShapeViewer>;
