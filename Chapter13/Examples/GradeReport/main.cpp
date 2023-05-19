#include "group.h"
#include "readFile.h"
#include "write.h"

int main() {
	
	Group testGroup;
	Read::readFile(testGroup);
	Write::writeFile(testGroup);
	
	return 0;
}