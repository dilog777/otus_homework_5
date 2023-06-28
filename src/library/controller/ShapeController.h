#pragma once

#include <memory>
#include <string>

#include "../model/IObserver.h"

class IShapeModel;
using IShapeModelPtr = std::shared_ptr<IShapeModel>;

class IShapeViewer;
using IShapeViewerPtr = std::shared_ptr<IShapeViewer>;

class Shape;
using ShapePtr = std::shared_ptr<Shape>;



class ShapeController : public IObserver
{
public:
	ShapeController(IShapeModelPtr &model, IShapeViewerPtr &viewer);

	void newDocument();
	void saveDocument(const std::string &filePath);
	void loadDocument(const std::string &filePath);

	void addShape(ShapePtr &shape);
	void removeShape(ShapePtr &shape);

	// IObserver
	void update() override;

private:
	IShapeModelPtr _model;
	IShapeViewerPtr _viewer;

	bool _updateBlocked { false };
};
