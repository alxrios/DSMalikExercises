#ifndef EXTDATETYPE_H
#define EXTDATETYPE_H

#include <dateType.h>


class extDateType : public dateType
{
    public:
        extDateType(int month = 1, int day = 1, int year = 1900);
        virtual ~extDateType();
		void printDate2() const;
			//Prints the date to the console with the month in string format
		void printMonth() const;
			//Prints the month in string format and the year

    protected:

    private:
		std::string strMonth = monthName();
};

#endif // EXTDATETYPE_H
