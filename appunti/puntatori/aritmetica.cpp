// aritmetica dei puntatori

#include <iostream>
using namespace std;

int main()
{
	/*
	 * Si ricorda che il nome di un vettore è uguale all'indirizzo
	 * del suo primo elemento. Dunque:
	 *
	 * v <---> &v[0]
	 */

	int i;
	const int MAX_LEN = 4;
	int v[MAX_LEN];

	/*
	 * Assegnazione di valori ad elementi di un vettore.
	 *
	 * *v		<--->	v[0]
	 * *(v + i)	<--->	v[i]
	 */

	*v		= 1;
	*(v + 1)	= 10;
	*(v + 2)	= 100;
	*(v + 3)	= 1000;

	// A Lopriore piace tanto questo formato...

	cout << '[' << MAX_LEN << "] = <" << v[0];

	for (i = 1; i < MAX_LEN; i++)
		cout << ", " << v[i];

	cout << ">\n";

	// Stampa gli indirizzi in memoria di ogni elemento del vettore.

	for (int i = 0; i < MAX_LEN; i++)
		cout << "v[" << i << "] = " << &v[i] << '\n';

	return 0;
}
