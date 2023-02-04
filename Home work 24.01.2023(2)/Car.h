#pragma once
#include "IVehicle.h"



class Car :public IVehicle{
public:
	Car(size_t speed, const std::string& model);
	const std::string& getModel()override;
	void setModel(const std::string& model)override;
	size_t getSpeed()override;
	void setSpeed(size_t speed)override;
	void drive() override;
private:
	std::string _model;
	size_t _speed;
};

