#ifndef H_group
#define H_group
#include "student.h"

class Group {
	public:
		Group(int = 0, int = 0);
			// Constructor
		Student students[50];
			// Supports as maximum 50 students
		void setNumberStudents(int = 0);
			// Sets the number of students
		void setTuitionRate(int = 0);
			// Sets the tuition rate
		int getNumberOfStudents();
			// Returns the number of students
		int getTuitionRate();
			// Returns the tuition rate
	private:
		int numberOfStudents;
		int tuitionRate;
};

#endif