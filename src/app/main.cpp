#include "controller/ShapeController.h"
#include "model/ShapeCircle.h"
#include "model/ShapeLine.h"
#include "model/ShapeModel.h"
#include "model/ShapeRectangle.h"
#include "model/ShapeSquare.h"
#include "view/ConsoleShapeViewer.h"



int main(int, char **)
{
	IShapeModelPtr model = std::make_shared<ShapeModel>();
	IShapeViewerPtr viewer = std::make_shared<ConsoleShapeViewer>();
	ShapeController controller(model, viewer);

	ShapePtr circle = std::make_shared<ShapeCircle>(10, 20, 50);
	ShapePtr line = std::make_shared<ShapeLine>(10, 20, 30, 40);
	ShapePtr rectangle = std::make_shared<ShapeRectangle>(20, 30, 40, 60);
	ShapePtr square = std::make_shared<ShapeSquare>(40, 50, 15);
	controller.addShape(circle);
	controller.addShape(line);
	controller.addShape(rectangle);
	controller.addShape(square);

	return 0;
}
