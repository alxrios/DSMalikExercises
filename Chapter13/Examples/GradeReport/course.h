#ifndef H_course
#define H_course
#include<string>

class Course {
	public:
		Course(std::string = "", std::string = "", int = 0, char = ' ');
			// Constructor
		void setCourseCode(std::string = "");
			// Sets course code
		void setCourseName(std::string = "");
			// Sets course name
		void setCourseCredits(int = 0);
			// Sets course credits
		void setCourseGrade(char = ' ');
			// Sets course grade
		std::string getCourseCode();
			// Returns course code
		std::string getCourseName();
			// Returns course name
		int getCourseCredits();
			// Returns course credits
		char getCourseGrade();
			// Returns course credits
		void printCode();
			// Prints course code
		void printName();
			// Prints course name
		void printCredits();
			// Prints course credits
		void printGrade();
			// Prints course grade
	private:
		std::string courseCode;
		std::string courseName;
		int courseCredits;
		char courseGrade;
		
};

#endif