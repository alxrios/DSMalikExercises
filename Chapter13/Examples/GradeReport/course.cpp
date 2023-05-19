#include "course.h"
#include <iostream>

Course::Course(std::string code, std::string name, int credits, char grade) {
	courseCode = code;
	courseName = name;
	courseCredits = credits;
	courseGrade = grade;
}

void Course::setCourseCode(std::string code) {
	courseCode = code;
}

void Course::setCourseName(std::string name) {
	courseName = name;
}

void Course::setCourseCredits(int credits) {
	courseCredits = credits;
}

void Course::setCourseGrade(char grade) {
	courseGrade = grade;
}

void Course::printCode() {
	std::cout << "\nCourse code: " << courseCode;
}

void Course::printName() {
	std::cout << "\nCourse name: " << courseName;
}

void Course::printCredits() {
	std::cout << "\nCourse credits: " << courseCredits; 
}

void Course::printGrade() {
	std::cout << "\nCourse grade: " << courseGrade;
}

std::string Course::getCourseCode() {
	return(courseCode);
}

std::string Course::getCourseName() {
	return(courseName);
}

int Course::getCourseCredits() {
	return(courseCredits);
}

char Course::getCourseGrade() {
	return(courseGrade);
}