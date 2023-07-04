#include "controller/ShapeDocument.h"
#include "controller/ConsoleUserInterface.h"
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
	IUserInterfacePtr userInterface = std::make_shared<ConsoleUserInterface>();
	ShapeDocument document(model, viewer, userInterface);

	document.newDoc();
	ShapePtr circle = std::make_shared<ShapeCircle>(10, 20, 50);
	ShapePtr line = std::make_shared<ShapeLine>(10, 20, 30, 40);
	ShapePtr rectangle = std::make_shared<ShapeRectangle>(20, 30, 40, 60);
	ShapePtr square = std::make_shared<ShapeSquare>(40, 50, 15);
	document.addShape(circle);
	document.addShape(line);
	document.addShape(rectangle);
	document.addShape(square);
	document.saveAs("filePath.ext");

	return 0;
}
