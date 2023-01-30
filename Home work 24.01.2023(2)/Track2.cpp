#include "Track2.h"
#include "ITrack.h"
#include "Bike.h"
#include "Car.h"
#include <iostream>
#include <string>
#include <vector>

//Track2::Track2() {}
Track2::Track2(Car& num1, Bike& num2) : _num1(num1), _num2(num2) {}

const std::string& Track2::getQuality() {
	return _quality;
}
void Track2::race_started() {
	std::cout << "The race has started on the Track2!!" << std::endl;
}

void Track2::races_func(Car num1, Bike num2) {
	if (num1.getSpeed() > num2.getSpeed()) {
		std::cout << num1.getModel() << " won!\n";
	}
	else if (num1.getSpeed() == num2.getSpeed()) {
		std::cout << num1.getModel() << " and " << num2.getModel() << " arrived at the same time!!\n";
	}
	else if (num1.getSpeed() < num2.getSpeed()) {
		std::cout << num2.getModel() << " won!\n";
	}
}