// pararray/parrcost.cpp -- parametri array costanti
// Trova il massimo valore in un dato vettore di interi.

#include <iostream>
using namespace std;

int massimo(const int v[], int n)
{
	int m = v[0];

	for (int i = 1; i < n; i++)
		m = m >= v[i] ? m : v[i];

	return m;
}

void leggi(int v[], const int n)
{
	for (int i = 0; i < n; i++)
		cin >> v[i];
}

// La funzione seguente è errata in quanto è necessario
// modificare il vettore puntato (chiamante). Vedi urgente.txt

void errata(const int v[] /* const int *v */)
{
	v[3] = 0;
}

int main()
{
	int nElem;

	cout << "Quanti elementi? ";
	cin >> nElem;

	// controllo dell'errore
	nElem = nElem < 1 ? 1 : nElem;

	int *vett = new int[nElem];

	cout << "Elementi? ";
	leggi(vett, nElem);
	cout << "Massimo: " << massimo(vett, nElem) << '\n';

	delete [] vett;

	const int giorniDelMese[] = {
		31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};

	cout << "Massimo: " << massimo(giorniDelMese, 12) << '\n';

	return 0;
}
