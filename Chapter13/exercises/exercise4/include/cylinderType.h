#ifndef CYLINDERTYPE_H
#define CYLINDERTYPE_H

#include <circleType.h>


class cylinderType : public circleType
{
    public:
        cylinderType(double h = 0, double r = 0);
			//Constructor with default parameters.
			//The default values are set to: heigth = 0; radius = 0
        virtual ~cylinderType();
		double getVolume();
			//Returns the volume of the cylinder
			//Postcondition: Volume is calculated and returned
		double getSurface();
			//Returns the surface of the cylinder
			//Postcondition: Surface is calculated and returned
		void printData();
			//Prints the heigth, radius, volume and surface of the cylinder object
		void setHeigth(double h);
			//Sets the heigth to h only if h >= 0
		void setRadius(double r);
			//Sets the radius to r only if r >= 0

    protected:

    private:
		double heigth;
};

#endif // CYLINDERTYPE_H
