#include "group.h"
#include "student.h"

Group::Group(int numStudents, int tuition) {
	numberOfStudents = numStudents;
	tuitionRate = tuition;
}

void Group::setNumberStudents(int number) {
	numberOfStudents = number;
}

void Group::setTuitionRate(int rate) {
	tuitionRate = rate;
}

int Group::getNumberOfStudents() {
	return(numberOfStudents);
}

int Group::getTuitionRate() {
	return(tuitionRate);
}