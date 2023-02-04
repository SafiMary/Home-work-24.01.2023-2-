#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <windows.h>
#include "Bike.h"
#include "Car.h"
#include "ITrack.h"
#include "IVehicle.h"
#include "Track1.h"
#include "Track2.h"


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	IVehicle* car1 = new Car(50, "Mersedes");
	IVehicle* bike1 = new Bike(70, "Harley");
	ITrack* track1 = new Track1("Трасса 1", car1, bike1);
	ITrack* track2 = new Track2("Трасса 2", car1, bike1);
	
	track1->race_started();
	track1->races_func(car1, bike1);
	track2->race_started();
	track2->races_func(car1, bike1);

	delete track1;
	delete track2;
	delete car1;
	delete bike1;



}