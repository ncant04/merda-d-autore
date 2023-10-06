// asgmnt.cpp -- operatori di assegnameto

#include <iostream>
using namespace std;

int main()
{
	int i = 1, j = 2, k;

	//
	// Esempio 1:
	//

	k = j = i = 12;	// associativo a destra
	cout << i << '\t' << j << '\t' << k << '\n';

	//
	// Esempio 2:
	//

	k = j = 2 * (i = 100);

	cout << i << '\t' << j << '\t' << k << '\n';

	k = j + 1 = 2 * (i = 100);	// Errore!

	return 0;
}
