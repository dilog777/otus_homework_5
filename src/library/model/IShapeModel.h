#pragma once

#include <string>

#include "Observable.h"
#include "Shape.h"



class IShapeModel : public Observable
{
public:
	virtual ~IShapeModel() = default;

	virtual void clear() = 0;
	virtual void load(const std::string &filePath) = 0;
	virtual void save(const std::string &filePath) = 0;

	virtual const ShapeList &shapes() const = 0;
	virtual void addShape(ShapePtr &shape) = 0;
	virtual void removeShape(ShapePtr &shape) = 0;

	using Hash = int;
	virtual Hash calculateHash() const = 0;
};

using IShapeModelPtr = std::shared_ptr<IShapeModel>;
