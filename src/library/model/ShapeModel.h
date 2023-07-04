#pragma once

#include "IShapeModel.h"



class ShapeModel : public IShapeModel
{
public:
	ShapeModel();
	~ShapeModel() override;

	void clear() override;
	void load(const std::string &filePath) override;
	void save(const std::string &filePath) override;

	const ShapeList &shapes() const override;
	void addShape(ShapePtr &shape) override;
	void removeShape(ShapePtr &shape) override;

	Hash calculateHash() const override;

private:
	class Impl;
	Impl *_impl;
};
