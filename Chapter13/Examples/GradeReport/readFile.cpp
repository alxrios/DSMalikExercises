#include "readFile.h"
#include <fstream>
#include <string>

void Read::readFile(Group & groupe) {
	std::ifstream infile;
	int auxInt;
	std::string auxString;
	char auxChar;
	
	infile.open("inputFile.txt");
	// First read and set number of students and tuition rate
	infile >> auxInt;
	groupe.setNumberStudents(auxInt);
	infile >> auxInt;
	groupe.setTuitionRate(auxInt);
	
	// Now read the students info
	for (int i = 0; i < groupe.getNumberOfStudents(); i++) {
		infile >> auxString;
		groupe.students[i].setFirstName(auxString);
		infile >> auxString;
		groupe.students[i].setLastName(auxString);
		infile >> auxString;
		groupe.students[i].setStudentCode(auxString);
		infile >> auxChar;
		groupe.students[i].setTuitionPaid(auxChar);
		infile >> auxInt;
		groupe.students[i].setCoursesNumber(auxInt);
		// Read number of courses for the ith student
		for (int j = 0; j < groupe.students[i].getCoursesNumber(); j++) {
			infile >> auxString;
			groupe.students[i].courses[j].setCourseName(auxString);
			infile >> auxString;
			groupe.students[i].courses[j].setCourseCode(auxString);
			infile >> auxInt;
			groupe.students[i].courses[j].setCourseCredits(auxInt);
			infile >> auxChar;
			groupe.students[i].courses[j].setCourseGrade(auxChar);
		}
	}
	infile.close();	
}