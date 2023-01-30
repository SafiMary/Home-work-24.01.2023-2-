#pragma once
#include <string>
//#include "Track1.h"
//#include "Track1.cpp"
//#include "Track2.h"
//#include "Track2.cpp"
#include "IVehicle.h"


class Bike : public IVehicle{
public:
	Bike(size_t speed, const std::string& model);
	void setModel(const std::string& model)override;
	const std::string& getModel()override;
	size_t getSpeed()override;
	void setSpeed(size_t speed)override;
	void drive() override;
private:
	std::string _model;
	size_t _speed;
};

