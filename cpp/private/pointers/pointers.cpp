#include <iostream>
using namespace std;

int main()
{
	char szText[] = "Hello, World!";
	char * pText = szText;

	// Steps pointer by a single byte
	pText++;

	// Steps pointer by 5 bytes
	pText += 5;

	int aNumbers[] = { 1, 2, 3, 4, 5 };
	int * pNumbers = aNumbers;

	// Steps pointer by a single integer
	pNumbers++;

	// Steps pointer by 5 integers
	pNumbers += 5;

	return 0;
}
