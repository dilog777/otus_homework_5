#include "ShapeDocument.h"

#include <cassert>



ShapeDocument::ShapeDocument(IShapeModelPtr &model, IShapeViewerPtr &viewer, IUserInterfacePtr &userInterface)
	: _model { model }
	, _viewer { viewer }
	, _userInterface { userInterface }
{
	assert(_model);
	assert(_viewer);
	assert(_userInterface);

	_model->addObserver(this);
}



void ShapeDocument::newDoc()
{
	auto hash = _model->calculateHash();
	if (hash != _savedHash && _userInterface->confirmUser("Save changes?"))
		save();

	_model->clear();
	_filePath.clear();
	_savedHash = _model->calculateHash();
}



void ShapeDocument::open(const std::string &filePath)
{
	_model->load(filePath);
	_filePath = filePath;
	_savedHash = _model->calculateHash();
}



void ShapeDocument::save()
{
	auto hash = _model->calculateHash();
	if (hash == _savedHash)
		return;
	
	if (_filePath.empty())
		_filePath = _userInterface->askUser("Select save path");
	
	_model->save(_filePath);
	_savedHash = hash;
}



void ShapeDocument::saveAs(const std::string &filePath)
{
	_model->save(filePath);
	_filePath = filePath;
	_savedHash = _model->calculateHash();
}



void ShapeDocument::addShape(ShapePtr &shape)
{
	_model->addShape(shape);
}



void ShapeDocument::removeShape(ShapePtr &shape)
{
	_model->removeShape(shape);
}



void ShapeDocument::update()
{
	_viewer->clear();
	for (const auto &shape : _model->shapes())
		shape->draw(_viewer.get());
}
