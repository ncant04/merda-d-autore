// par_rif/invvett.cpp -- inverte l'ordine degli elementi di un vettore dato

#include <iostream>
using namespace std;

void scambia(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

int main()
{
	const int ARRSIZE = 100;
	int v[ARRSIZE], nElem;

	cout << "Quanti elementi? ";
	cin >> nElem;
	cout << "Elementi? ";

	// lettura vettore
	for (int i = 0; i < nElem; i++)
		cin >> v[i];

	// scambio di elementi
	for (int j = 0, k = nElem - 1; j < k; j++, k--)
		scambia(v[j], v[k]);

	// stampa vettore
	cout << '[' << nElem << "] <" << v[0];
	for (int i = 1; i < nElem; i++)
		cout << ", " << v[i];

	cout << ">\n";

	return 0;
}
