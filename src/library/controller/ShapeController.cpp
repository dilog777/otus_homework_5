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
	_updateBlocked = true;

	_model->clear();

	_updateBlocked = false;
	update();
}



void ShapeController::saveDocument(const std::string& path)
{
	std::ofstream stream(path);
	if (stream.is_open())
	{
		// auto data = shape->toString();
		// stream << data;
	}
	stream.close();
}



void ShapeController::loadDocument(const std::string& path)
{
	_updateBlocked = true;
	_model->clear();

	std::ifstream stream(path);
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



void ShapeController::update()
{
	if (_updateBlocked)
		return;
	
	_viewer->clear();
	for (const auto &shape : _model->shapes())
		shape->draw(_viewer.get());
}
