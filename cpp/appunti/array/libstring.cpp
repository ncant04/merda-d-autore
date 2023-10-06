// libstring.cpp -- funzioni di libreria per stringhe

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char stringa1[20] = "qwerty";
	char stringa2[20];

	strcpy(stringa2, stringa1);
	cout << stringa1 << '\n' << stringa2 << '\n' << stringa3 << '\n';

	// strcpy supplisce alla mancanza di assegnamento tra stringhe

	strcpy(stringa2, "uio");
	cout << "stringa2 = " << stringa2 << '\n';

	strcat(stringa1, stringa2);
	cout << stringa1 << '\n';			// qwertyuio

	cout << strcmp(stringa1, "qwertyuio") << '\n';	// 0
	cout << strlen(stringa1) << '\n';		// 9
	cout << strcmp(stringa1, stringa2) << '\n';	// -1

	return 0;
}
