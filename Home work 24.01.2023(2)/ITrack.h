#pragma once
//#include "Track1.h"
//#include "Track1.cpp"
//#include "Track2.h"
//#include "Track2.cpp"
#include "Car.h"
//#include "IVehicle.h"
#include "Bike.h"
#include <string>

class ITrack{
public:
	ITrack() = default;
	virtual const std::string& getQuality() = 0;
	virtual void race_started() = 0;
	virtual void races_func(Car num1, Bike num2) = 0;
	virtual ~ITrack() = default;

};

