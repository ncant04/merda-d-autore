// punttest.cpp -- "playground" per puntatori

#include <iostream>
using namespace std;

int main()
{
	int i = 0;

	// Crea un puntatore *h ed inizializzalo con l'indirizzo di i,
	// poi crea un puntatore *k, senza iniziallizzarlo

	int *h = &i, *k;

	k = h;
	*k = 1;

	cout << "i: " << i << '\t' << "h: " << *h << '\n';	// 1	1

	//-----------------------------------------------------------------------

	int i, j;
	int *p = &i, *q = &j;

	cin >> i >> j;
	*p = *q;

	cout << "i: " << i << '\t' << "j: " << j << '\n';

	return 0;
}
