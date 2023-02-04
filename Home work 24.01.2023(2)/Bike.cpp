#include "Bike.h"
#include "IVehicle.h"



Bike::Bike(size_t speed, const std::string& model) : _speed(speed), _model(model) {}

const std::string& Bike::getModel() {
	return _model;
}
void Bike::setModel(const std::string& model) {
	_model = model;
}
size_t Bike::getSpeed() {
	return _speed;
}

void Bike::setSpeed(size_t speed) {
	_speed = speed;
}
void Bike::drive() {
	std::cout << "Bike  Drive" << std::endl;
}
