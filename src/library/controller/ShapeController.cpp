#include "ShapeController.h"

#include <cassert>

#include "../model/IShapeModel.h"
#include "../view/IShapeViewer.h"



ShapeController::ShapeController(IShapeModel *model, IShapeViewer *viewer)
	: _model { model }
	, _viewer { viewer }
{
	assert(_model);
	assert(_viewer);

	_model->addObserver(this);
}



void ShapeController::update()
{
	for (const auto &shape : _model->shapes())
		shape->draw(_viewer);
}