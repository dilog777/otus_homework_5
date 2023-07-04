#pragma once

#include "../model/IObserver.h"
#include "../model/IShapeModel.h"
#include "../view/IShapeViewer.h"
#include "IUserInterface.h"



class ShapeDocument : public IObserver
{
public:
	ShapeDocument(IShapeModelPtr &model, IShapeViewerPtr &viewer, IUserInterfacePtr &userInterface);

	void newDoc();
	void open(const std::string &filePath);
	void save();
	void saveAs(const std::string &filePath);

	void addShape(ShapePtr &shape);
	void removeShape(ShapePtr &shape);

	// IObserver
	void update() override;

private:
	IShapeModelPtr _model;
	IShapeViewerPtr _viewer;
	IUserInterfacePtr _userInterface;

	std::string _filePath;
	IShapeModel::Hash _savedHash {};
};
