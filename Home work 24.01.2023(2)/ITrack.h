#pragma once
#include "IVehicle.h"
#include <string>
#include <iostream>

class ITrack{
public:
	 ITrack() = default;
	virtual const std::string& getQuality() = 0;
	virtual void race_started() = 0;
	virtual void races_func(IVehicle* num1, IVehicle* num2) = 0;
	virtual ~ITrack() = default;

};

