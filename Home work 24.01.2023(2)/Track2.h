#pragma once
#include "ITrack.h"



class Track2 : public ITrack{
public:

	Track2(const std::string& quality, IVehicle* num1, IVehicle* num2);
	const std::string& getQuality()override;
	void race_started()override;
	void races_func(IVehicle* num1, IVehicle* num2)override;
private:
	std::string _quality;
	IVehicle* _num1;
	IVehicle* _num2;
};

