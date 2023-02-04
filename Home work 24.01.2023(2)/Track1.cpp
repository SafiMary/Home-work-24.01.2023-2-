#include "Track1.h"
#include "ITrack.h"



Track1::Track1(const std::string& quality, IVehicle* num1, IVehicle* num2) : _quality(quality), _num1(num1), _num2(num2){}

const std::string& Track1::getQuality() {
	return _quality;
}
void Track1::race_started() {
	std::cout << "The race has started on the Track1!!!!" << std::endl;
}
 void Track1::races_func(IVehicle* num1, IVehicle* num2) {
	 if (num1->getSpeed() > num2->getSpeed()) {
		 std::cout << num1->getModel() << " won!\n";
	 }
	 else if (num1->getSpeed() == num2->getSpeed()) {
		 std::cout << num1->getModel() << " and " << num2->getModel() << " arrived at the same time!!\n";
	 }
	 else if (num1->getSpeed() < num2->getSpeed()) {
		 std::cout << num2->getModel() << " won!\n";
	 }
}