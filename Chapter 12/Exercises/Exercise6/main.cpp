#include "memberType.h"

int main() {
	memberType test("testName");
	test.showName();
	test.modifyName("testNewName");
	test.showName();
	test.modifyName();
	test.showName();
	test.showBooksBought();
	test.updateBooksBought(5);
	test.showBooksBought();
	test.showID();
	test.setID("012P");
	test.showID();
	test.setID("1234");
	test.showID();
	return 0;
}
