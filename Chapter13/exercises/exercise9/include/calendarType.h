#ifndef CALENDARTYPE_H
#define CALENDARTYPE_H

#include "dayType.h"
#include "extDateType.h"

class calendarType
{
    public:
        calendarType(int month = 1, int year = 1500);
        virtual ~calendarType();
		void setFirstDay(std::string fday);
			//Sets the first day to the value passed in fday
		void setMonth(int mth);
			//Sets the month to the value passed to mth variable
		void setYear(int yr);
			//Sets the year to the value passed to yr variable
		void printCalendar();
			//Prints the calendar for the particular month
		void printWholeCalendar();
			//Prints the calendar for the whole year
		

    protected:

    private:
		dayType firstDay;
		extDateType date;
		std::string firstDayOfMonth();
			//Returns a string with the first day of the month to be printed
		int numOfSpaces(std::string);
			//Returns the number of spaces needed given the first day of a week in a calendar.
};

#endif // CALENDARTYPE_H
