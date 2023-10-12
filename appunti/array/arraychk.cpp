// arraychk.cpp
// gestione di un array unidimensionale con controllo dell'errore

#include <iostream>
using namespace std;

int main()
{
	const int MAX_BUF = 256;
	int v[MAX_BUF];
	int nElem;

	cin >> nElem;

	// controllo dell'errore
	nElem = nElem > MAX_BUF ? MAX_BUF : nElem;

	for (int i = 0; i < nElem; i++)
		cin >> v[i];

	for (int i = 0; i < nElem; i++)
		v[i]++;

	// stampa del vettore
	cout << '[' << nElem << "] <" << v[0];
	for (int i = 1; i < nElem; i++)
		cout << ", " << v[i];

	cout << ">\n";

	return 0;
}
