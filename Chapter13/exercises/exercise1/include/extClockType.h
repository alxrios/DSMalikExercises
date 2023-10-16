#ifndef EXTCLOCKTYPE_H
#define EXTCLOCKTYPE_H

#include <clockType.h>
#include <string>


class extClockType : public clockType
{
    public:
        extClockType();
			//Default constructor
			//The time is set to 00::00::00 UTC+/-00.
			//Postcondition: hr = 0; min = 0; sec = 0; tz = "UTC+/-00";

        virtual ~extClockType();

		void printTime();
			//Function to print the time.
			//Postcondition: The time is printed in the form
			//	hh::mm::ss UTC+/-00.

		void setTime(int hours, int minutes, int seconds, std::string timeZone);
			//Function to set the time.
			//The time is set according to the parameters.
			//Postcondition hr = hours; min = minutes;
			//	sec = seconds; tz = timeZone;
			//	The function checks whether the values of
			//	hours, minutes, and seconds are valid. If a
			//  value is invalid, the default value 0 is
			//	assigned.

		void getTime(int& hours, int& minutes, int& seconds, std::string& timeZone) const;
			//Function to return the time.
			//Postcondition: hours = hr; minutes = min;
			//	seconds = sec; timeZone = tz;

		bool equalTime(const extClockType& otherClock) const;
			//Function to compare the two times.
			//Postcondition: Returns true if this time is equal to
			//	otherclock; otherwise, returns false.


    protected:

    private:
		std::string tz; //Varible to store the time zone
};

#endif // EXTCLOCKTYPE_H
