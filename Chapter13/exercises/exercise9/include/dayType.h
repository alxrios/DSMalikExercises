#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>

class dayType
{
    public:
        dayType(std::string tag = "Mon");
			//Default constructor
			//pos is setted to 1 by default (i.e. "Mon")
        virtual ~dayType();
		void setDay(std::string tag);
			//Sets day = tag
		void printDay() const;
			//Prints the day to the console
		std::string getDay();
			//Returns the day
		std::string getNextDay();
			//Returns the next day
		std::string getPreviousDay();
			//Returns the previous day
		std::string getNthDay(int);
			//Returns the day after n days plus the present one
    protected:

    private:
        const std::string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
		int pos;
		int dayToPos(std::string);
			//Recieves an string corresponding to one of the days in array "days" and returns it's
			//integer possition in the array
};

#endif // DAYTYPE_H
