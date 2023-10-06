// vocali.cpp -- selezione tramite caratteri

#include <iostream>
using namespace std;

int main()
{
	char c, lowercase;
	cin >> c;

	lowercase = tolower(c);

	switch (lowercase) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout << "vocale\n";
			break;

		// In assenza di operazione di default, non fare nulla.
	}

	return 0;
}
