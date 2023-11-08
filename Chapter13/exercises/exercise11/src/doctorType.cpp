#include "doctorType.h"

doctorType::doctorType(std::string fname, std::string lname, std::string spec): personType(fname, lname) {
    //ctor
	speciality = spec;
}

doctorType::~doctorType() {
    //dtor
}

std::string doctorType::getSpeciality() const {
	return speciality;
}

void doctorType::setSpeciality(std::string spec) {
	speciality = spec;
}