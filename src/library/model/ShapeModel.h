#pragma once

#include "IShapeModel.h"



class ShapeModel : public IShapeModel
{
public:
	ShapeModel();
	~ShapeModel() override;

	void clear() override;

	const ShapeList shapes() const override;
	void addShape(ShapePtr &shape) override;
	void removeShape(ShapePtr &shape) override;

private:
	class Impl;
	Impl *_impl;
};
