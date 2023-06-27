#include "ConsoleShapeViewer.h"

#include <iostream>


void ConsoleShapeViewer::clear()
{
	std::cout << "Clear view" << std::endl;
}



void ConsoleShapeViewer::drawCircle(double x, double y, double r)
{
	std::cout << "Draw circle "
		"at point (x = " << x << " y = " << y << ") "
		"with radius = " << r << std::endl;
}



void ConsoleShapeViewer::drawLine(double x1, double y1, double x2, double y2)
{
	std::cout << "Draw line "
		"from point (x = " << x1 << " y = " << y1 << ") "
		"to point (x = " << x2 << " y = " << y2 << ")" << std::endl;
}



void ConsoleShapeViewer::drawRect(double x, double y, double width, double height)
{
	std::cout << "Draw rectangle "
		"from point (x = " << x << " y = " << y << ") "
		"with width = " << width << " and height = " << height << std::endl;
}
