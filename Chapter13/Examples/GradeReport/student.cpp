#include "student.h"
#include <iostream>

Student::Student(std::string fname, std::string lname, std::string code, char tuition, int ncourses) 
	: PersonType(fname, lname)
{
	studentCode = code;
	isTuitionPaid = tuition;
	numberOfCourses = ncourses;
}

void Student::setStudentCode(std::string code) {
	studentCode = code;
}

std::string Student::getStudentCode() {
	return(studentCode);
}

void Student::setCoursesNumber(int number) {
	numberOfCourses = number;
}

int Student::getCoursesNumber() {
	return(numberOfCourses);
}

void Student::printCoursesNumber() {
	std::cout << "\nNumber of courses: " << numberOfCourses;
}

void Student::setTuitionPaid(char tuition) {
	isTuitionPaid = tuition;
}

char Student::getTuitionPaid() {
	return(isTuitionPaid);
}

void Student::printTuitionPaid() {
	std::cout << "\nIs tuition paid: " << isTuitionPaid;
}
 
int Student::getCreditsSum() {
	int sum = 0;
	for (int i = 0; i < numberOfCourses; i++) {
		sum += courses[i].getCourseCredits();
	}
	return(sum);
}

float Student::getGPA() {
	float sum = 0;
	for (int i = 0; i < numberOfCourses; i++) {
		switch(courses[i].getCourseGrade()) {
			case 'A':
				sum += 4;
				break;
			case 'B':
				sum += 3;
				break;
			case 'C':
				sum += 2;
				break;
			case 'D':
				sum += 1;
				break;
			case 'F':
				sum += 0;
				break;
			default:
				sum += 0;
				break;
		}
	}
	return(sum/numberOfCourses);
}

float Student::getAmountDue(int tuition) {
	float amountDue;
	if (isTuitionPaid == 'Y') {
		amountDue = 0;
	} else {
		amountDue = tuition*getCreditsSum();
	}
	return(amountDue);
}