// aritmetica dei puntatori

#include <iostream>
using namespace std;

int main()
{
	// NOTA BENE: nome di un vettore = indirizzo del suo primo elemento
	//
	// v <-> &v[0]

	int i;
	const int MAX_LEN = 4;
	int v[MAX_LEN];

	// assegnazione di valore ad elementi di un vettore
	//
	// *v <-> v[0]
	// *(v + i) <-> v[i]

	*v		= 1;
	*(v + 1)	= 10;
	*(v + 2)	= 100;
	*(v + 3)	= 1000;

	cout << '[' << MAX_LEN << "] = <" << v[0];

	for (i = 1; i < MAX_LEN; i++)
		cout << ", " << v[i];

	cout << ">\n";


	// stampa gli indirizzi in memoria di ogni elemento del vettore

	for (int i = 0; i < MAX_LEN; i++)
		cout << "v[" << i << "] = " << &v[i] << '\n';

	return 0;
}
