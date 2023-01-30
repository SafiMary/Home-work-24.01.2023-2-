#pragma once
//#include "Track1.h"
//#include "Track1.cpp"
//#include "Track2.h"
//#include "Track2.cpp"
#include "IVehicle.h"
#include <string>


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

