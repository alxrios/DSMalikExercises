#include "write.h"
#include <fstream>
#include <iomanip>
#include <iostream>

void Write::writeFile(Group & groupe) {
	std::streamsize originalPrecision = std::cout.precision();
	std::ofstream outfile;
	outfile.open("outputFile.txt");
	for (int i = 0; i < groupe.getNumberOfStudents(); i++) {
		outfile << "Student Name: " << groupe.students[i].getFirstName() << " "
			<<  groupe.students[i].getLastName() << "\n";
		outfile << "Student ID: " << groupe.students[i].getStudentCode() << "\n";
		outfile << "Number of courses enrolled: " << groupe.students[i].getCoursesNumber() << "\n\n";
		
		// Write courses information
		outfile << "Course No  " << "Course Name  " << "Credits Grade\n";
		for (int j = 0; j < groupe.students[i].getCoursesNumber(); j++) {
			outfile << groupe.students[i].courses[j].getCourseCode() << "     ";
			outfile << groupe.students[i].courses[j].getCourseName() << std::setw(7 + 11 - groupe.students[i].courses[j].getCourseName().length());
			outfile << groupe.students[i].courses[j].getCourseCredits();
			if (groupe.students[i].getTuitionPaid() == 'Y') {
				outfile << std::setw(7) << groupe.students[i].courses[j].getCourseGrade() << "\n";
			} else {
				outfile << std::setw(8) << "***\n";
			}
			
		}
		outfile << "\nTotal number of credit hours: " << groupe.students[i].getCreditsSum();
		if (groupe.students[i].getTuitionPaid() == 'Y') {
			outfile << "\nMid-Semester GPA: " << std::setprecision(3) << groupe.students[i].getGPA();
		} else {
			outfile << "\n*** Grades are being held for not paying the tuition. ***";
			outfile << "\nAmount Due: $" << std::setprecision(originalPrecision) << groupe.students[i].getAmountDue(groupe.getTuitionRate());
			
		}
		outfile << "\n";
		for (int i = 0; i < 25; i++) {
			outfile << "-*";
		}
		outfile << "\n\n";
	}
	outfile.close();
}