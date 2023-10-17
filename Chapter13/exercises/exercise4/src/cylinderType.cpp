#include "cylinderType.h"
#include <math.h>
#include <iostream>

cylinderType::cylinderType(double h, double r) {
    //ctor
	if (r >= 0) {
		circleType::setRadius(r);
	} else {
		circleType::setRadius(0);
	}
	
	if (h >= 0) {
		heigth = h;
	} else {
		heigth = 0;
	}
}

cylinderType::~cylinderType() {
    //dtor
}

double cylinderType::getVolume() {
	return M_PI*pow(circleType::getRadius(), 2)*heigth;
}

double cylinderType::getSurface() {
	return 2*M_PI*circleType::getRadius()*heigth + 2*circleType::area();
}

void cylinderType::printData() {
	std::cout << "\nHeigth: " << heigth << " ft";
	std::cout << "\nRadius: " << circleType::getRadius() << " ft";
	std::cout << "\nVolume: " << getVolume() << " ft^3";
	std::cout << "\nSurface: " << getSurface() << " ft^2" ;
}

void cylinderType::setHeigth(double h) {
	if (h >= 0) {
		heigth = h;
	}
}

void cylinderType::setRadius(double r) {
	if (r >= 0) {
		circleType::setRadius(r);
	}
}