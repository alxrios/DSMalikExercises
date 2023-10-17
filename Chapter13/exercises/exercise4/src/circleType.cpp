#include "circleType.h"
#include <math.h>
#include <iostream>


circleType::circleType(double r) {
	if (r >= 0.0) {
		radius = r;
	} else {
		radius = 0.0;
	}
}

circleType::~circleType()
{
    //dtor
}

void circleType::setRadius(double r) {
	if (r >= 0.0) {
		radius = r;
	} else {
		radius = 0.0;
	}
}

double circleType::getRadius() {
	return radius;
}

double circleType::area() {
	return pow(radius, 2)*M_PI;
}

double circleType::circumference() {
	return 2*M_PI*radius;
}

void circleType::printRAC() {
	std::cout << "\nRadius: " << getRadius();
	std::cout << "\nArea: " << area();
	std::cout << "\nCircumference: " << circumference();
}