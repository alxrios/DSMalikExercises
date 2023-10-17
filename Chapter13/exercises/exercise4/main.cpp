#include <iostream>
#include "cylinderType.h"


int main()
{
	double r, h, scostL, pcostF;
	std::cout << "\nPlease, input the dimensions (in feet) of the container...\n\n";
	std::cout << "Radius of the base: ";
	std::cin >> r;
	std::cout << "\nHeigth of the cylinder: ";
	std::cin >> h;
	std::cout << "\n\nPlease, introduce the shipping cost per liter...\n\n";
	std::cout << "Cost: ";
	std::cin >> scostL;
	std::cout << "\n\nPlease, introduce the paint cost per square foot...\n\n";
	std::cin >> pcostF;
	cylinderType container(h, r);
	container.printData();
	std::cout << "\n\nShipping cost: " << container.getVolume()*28.317*scostL << " $"; //28.317 factor of conversion from ft^3 to L
	std::cout << "\nPainting cost: " << container.getSurface()*pcostF << " $";
    return 0;
}
