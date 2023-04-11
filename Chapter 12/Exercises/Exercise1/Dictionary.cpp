#include "Dictionary.h"

int Dictionary::transform(char rom) {
	int decimal = 0;
	switch(rom) {
		case 'I':
			decimal = 1;
			break;
		case 'V':
			decimal = 5;
			break;
		case 'X':
			decimal = 10;
			break;
		case 'L':
			decimal = 50;
			break;
		case 'C':
			decimal = 100;
			break;
		case 'D':
			decimal = 500;
			break;
		case 'M':
			decimal = 1000;
			break;
		default:
			decimal = -1;
			break;
	}
	return(decimal);
}