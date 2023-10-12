// par_rif/formali.cpp -- riferimenti a costante come parametri formali

#include <iostream>
using namespace std;

int f(const int& n)
{
	// const previene modifiche della variabile trasmessa per riferimento
	// all'interno della funzione

	int i = n + 10;
	// n += 10;	// Errore!
	return i;
}

int main()
{
	cout << f(10) << '\n';
	return 0;
}
