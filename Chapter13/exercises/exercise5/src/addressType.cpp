#include "addressType.h"
#include <iostream>

addressType::addressType(std::string st, std::string cty, std::string ste, std::string zpc) {
    //ctor
	streetAddress = st;
	city = cty;
	state = ste;
	zipCode = zpc;
}

addressType::~addressType() {
    //dtor
}

void addressType::setAddress(std::string st, std::string cty, std::string ste, std::string zpc) {
	streetAddress = st;
	city = cty;
	state = ste;
	zipCode = zpc;
}

void addressType::printAddress() const {
	std::cout << "\nStreet address: " << streetAddress;
	std::cout << "\nCity: " << city;
	std::cout << "\nState: " << state;
	std::cout << "\nZip code: " << zipCode;
}

std::string addressType::getStreet() const {
	return streetAddress;
}

std::string addressType::getCity() const {
	return city;
}

std::string addressType::getState() const {
	return state;
}

std::string addressType::getZipCode() const {
	return zipCode;
}

void addressType::setStreet(std::string st) {
	streetAddress = st;
}

void addressType::setCity(std::string cty) {
	city = cty;
}

void addressType::setState(std::string ste) {
	state = ste;
}

void addressType::setZipCode(std::string zpc) {
	zipCode = zpc;
}