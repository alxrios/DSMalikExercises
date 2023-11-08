#include "billType.h"

billType::billType(std::string pid, float phCharg, float dctrFee, float rmCharg) {
    //ctor
	patientsID = pid;
	//Charges can't be negative
	if (phCharg >= 0.0) {
		pharmacyCharges = phCharg;
	}
	if (dctrFee >= 0.0) {
		doctorsFee = dctrFee;
	}
	if (rmCharg >= 0.0) {
		roomCharges = rmCharg;
	}
}

billType::~billType() {
    //dtor
}

std::string billType::getPatientId() const {
	return patientsID;
}

float billType::getPharmFee() const {
	return pharmacyCharges;
}

float billType::getDocsFee() const {
	return doctorsFee;
}

float billType::getRoomFee() const {
	return roomCharges;
}

void billType::setPatientID(std::string pid) {
	patientsID = pid;
}

void billType::setPharmaCharges(float phchr) {
	pharmacyCharges = phchr;
}

void billType::setDoctorFee(float dcf) {
	doctorsFee = dcf;
}

void billType::setRoomCharges(float rmc) {
	roomCharges = rmc;
}