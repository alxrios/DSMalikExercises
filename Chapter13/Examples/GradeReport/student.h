#ifndef H_student
#define H_student
#include <string>
#include "person.h"
#include "course.h"

class Student: public PersonType {
	public:
		Student(std::string = "", std::string = "", std::string = "", char = 'N', int = 0);
			// Constructor
		void setStudentCode(std::string = "");
			// Sets student code
		std::string getStudentCode();
			// Gets the student's code
		void setCoursesNumber(int = 0);
			// Sets the number of courses
		int getCoursesNumber();
			// Returns the number of courses
		void printCoursesNumber();
			// Print courses number
		void setTuitionPaid(char = 'N');
			// Sets tuition information
		char getTuitionPaid();
			// Returns the tuition information
		void printTuitionPaid();
			// Prints Y if the tuition is paid and N otherwise
		Course courses[12];
			// Max. number of courses a student
			// can get = 12
		int getCreditsSum();
			// Returns the sum of all credits
		float getGPA();
			// Calculates the GPA
		float getAmountDue(int);
			// Calculates the amount dued by the student
	private:
		std::string studentCode;
		char isTuitionPaid;
		int numberOfCourses;
};

#endif