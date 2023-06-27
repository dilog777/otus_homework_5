#pragma once

#include "../model/IObserver.h"

class IShapeModel;
class IShapeViewer;



class ShapeController : public IObserver
{
public:
	ShapeController(IShapeModel *model, IShapeViewer *viewer);

	// IObserver
	void update() override;

private:
	IShapeModel *_model;
	IShapeViewer *_viewer;
};
