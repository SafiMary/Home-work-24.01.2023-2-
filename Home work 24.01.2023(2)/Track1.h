#pragma once
#include <string>
#include "ITrack.h"
#include "Car.h"
//#include "IVehicle.h"
#include "Bike.h"


class Track1: public ITrack{
public:
	//Track1();
	Track1(Car& num1, Bike& num2);
	const std::string& getQuality()override;
	void race_started()override;
	void races_func(Car num1, Bike num2)override;
private:
	std::string _quality;
	Car _num1;
	Bike _num2;
};

