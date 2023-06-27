#pragma once

#include "IShapeViewer.h"



class ConsoleShapeViewer : public IShapeViewer
{
public:
	void drawCircle(double x, double y, double r) override;
	void drawLine(double x1, double y1, double x2, double y2) override;
	void drawRect(double x, double y, double width, double height) override;
};
