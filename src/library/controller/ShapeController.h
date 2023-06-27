#pragma once

#include <memory>
#include <string>

#include "../model/IObserver.h"

class IShapeModel;
class IShapeViewer;
using IShapeModelPtr = std::shared_ptr<IShapeModel>;
using IShapeViewerPtr = std::shared_ptr<IShapeViewer>;


class ShapeController : public IObserver
{
public:
	ShapeController(IShapeModelPtr &model, IShapeViewerPtr &viewer);

	void newDocument();
	void saveDocument(const std::string &path);
	void loadDocument(const std::string &path);

	// IObserver
	void update() override;

private:
	IShapeModelPtr _model;
	IShapeViewerPtr _viewer;

	bool _updateBlocked { false };
};
