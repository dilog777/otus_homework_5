#include "ShapeController.h"

#include <cassert>
#include <fstream>

#include "../model/IShapeModel.h"
#include "../view/IShapeViewer.h"



ShapeController::ShapeController(IShapeModelPtr &model, IShapeViewerPtr &viewer)
	: _model { model }
	, _viewer { viewer }
{
	assert(_model);
	assert(_viewer);

	_model->addObserver(this);
}



void ShapeController::newDocument()
{
	_model->clear();
}



void ShapeController::saveDocument(const std::string &filePath)
{
	std::ofstream stream(filePath);
	if (stream.is_open())
	{
		// auto data = shape->toString();
		// stream << data;
	}
	stream.close();
}



void ShapeController::loadDocument(const std::string &filePath)
{
	_updateBlocked = true;
	_model->clear();

	std::ifstream stream(filePath);
	if (stream.is_open())
	{
		// auto data << steam; // read from steam
		// auto shape = Shape::fromString(data);
		// _model->addShape(shape);
	}
	stream.close();

	_updateBlocked = false;
	update();
}



void ShapeController::addShape(ShapePtr &shape)
{
	_model->addShape(shape);
}



void ShapeController::removeShape(ShapePtr &shape)
{
	_model->removeShape(shape);
}



void ShapeController::update()
{
	if (_updateBlocked)
		return;

	_viewer->clear();
	for (const auto &shape : _model->shapes())
		shape->draw(_viewer.get());
}
