#include <iostream>
#include "patientType.h"

int main()
{
    std::cout << "\nTesting...\n\n\n";
	patientType test("James", "Brown", 29);
	test.setBirth(7, 25, 1985);
	test.setDateAdmitted(12, 2, 2017);
	test.setDateDischarged(20, 2, 2017);
	test.setPhysicianData("Nick", "Riviera", "surgeon");
	test.printPatientsData(); 
    return 0;
}
