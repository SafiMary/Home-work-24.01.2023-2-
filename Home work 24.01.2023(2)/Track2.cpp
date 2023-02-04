#include "Track2.h"
#include "ITrack.h"
#include "Car.h"
#include "Bike.h"


Track2::Track2(const std::string& quality, IVehicle* num1, IVehicle* num2) : _quality(quality), _num1(num1), _num2(num2) {}
const std::string& Track2::getQuality() {
	return _quality;
}
void Track2::race_started() {
	std::cout << "The race has started on the Track2!!" << std::endl;
}

void Track2::races_func(IVehicle* num1, IVehicle* num2) {
	if (num1->getSpeed() < num2->getSpeed()) {
		std::cout << num1->getModel() << " won!\n";
	}
	else if (num1->getSpeed() == num2->getSpeed()) {
		std::cout << num1->getModel() << " and " << num2->getModel() << " arrived at the same time!!\n";
	}
	else if (num1->getSpeed() > num2->getSpeed()) {
		std::cout << num2->getModel() << " won!\n";
	}
}