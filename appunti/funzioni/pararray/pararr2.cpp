// pararray/pararr2.cpp -- esempio 2/2 per parametri array

#include <iostream>
using namespace std;

void leggi(int v[], const int n)
{
	cout << "Elementi? ";

	for (int i = 0; i < n; i++)
		cin >> v[i];
}

void scrivi(const int v[], const int n)
{
	cout << '[' << n << "] <" << *v;

	for (int i = 1; i < n; i++)
		cout << ", " << v[i];

	cout << ">\n";
}

void incrementa(int v[], const int n)
{
	for (int i = 0; i < n; i++)
		v[i]++;
}

void decrementa(int v[], const int n)
{
	int i = 0;

	while (i < n)
		(*(v + i++))--;
}

int main()
{
	int nElem;

	cout << "Numero di elementi? ";
	cin >> nElem;

	// controllo dell'errore
	nElem = nElem < 1 ? 1 : nElem;

	int *vett = new int[nElem];

	leggi(vett, nElem);
	incrementa(vett, nElem);
	scrivi(vett, nElem);

	leggi(vett, nElem);
	decrementa(vett, nElem);
	scrivi(vett, nElem);

	delete [] vett;

	return 0;
}
