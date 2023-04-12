#include <string>

class DayType {
	public:
		DayType();
			// Constructor
		DayType(std::string);
			// Second constructor
		void setDay(std::string);
			// Sets the day
		void printDay();
			// Prints the day
		void printNextDay();
			// Prints the next day
		void printPreviousDay();
			// Prints the previous day
		void printNthDay(int);
			// Prints the nth next day
	private:
		const std::string daysOfWeek[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
			// Stores the day of the week
		int currentDay;
			// Stores the index of the current day
		int strToIndex(std::string);
			// Recives a day name and returns it's position
			// in the daysOfWeek array
		std::string returnDay();
			// Returns the current day
		std::string returnNextDay();
			// Returns the next day
		std::string returnPreviousDay();
			// Returns the previous day
		std::string returnNthDay(int);
			// Returns the nth day after the 
			// present day
};
