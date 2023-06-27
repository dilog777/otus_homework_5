#pragma once

#include "IShapeModel.h"



class ShapeModel : public IShapeModel
{
public:
	ShapeModel();
	~ShapeModel() override;

	void clear() override;

	void addShape(ShapePtr &shape) override;
	const ShapeList shapes() const override;

private:
	class Impl;
	Impl *_impl;
};
