#pragma once
#include <iostream>

class IVehicle
{
public:
	IVehicle() = default;
	virtual const std::string& getModel() = 0; 
	virtual void setModel(const std::string & model) = 0;
	virtual size_t getSpeed() = 0;
	virtual void setSpeed(size_t speed) = 0;
	virtual void drive() = 0;
	virtual ~IVehicle() = default;

};

