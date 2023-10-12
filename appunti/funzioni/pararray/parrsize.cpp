/*
 * parrsize.cpp -- scrive gli elementi di un dato vettore di interi
 *
 * Errato utilizzo dell'operatore sizeof.
 */

#include <iostream>
using namespace std;

void scrivi(const int v[])
{
	// Errore! Vedi urgente.txt
	const int n = sizeof v / sizeof(int);	// Errore!

	cout << ']' << n << "] <" << v[0];
	for (int i = 1; i < n; i++)
		cout << ", " << v[i];

	cout << ">\n";
}

int main()
{
	int vett[] = { 10, 11, 12, 11, 10 };
	scrivi(vett);	// [1] <10>

	return 0;
}
