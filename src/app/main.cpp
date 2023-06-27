#include "model/ShapeModel.h"
#include "view/ConsoleShapeViewer.h"
#include "controller/ShapeController.h"



int main(int, char **)
{
	ShapeModel model;
	ConsoleShapeViewer viewer;
	ShapeController controller(&model, &viewer);

	return 0;
}
