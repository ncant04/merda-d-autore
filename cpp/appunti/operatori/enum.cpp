// enum.cpp -- tipi enumerati

#include <iostream>
using namespace std;

int main()
{
	enum Giorno {	// Nome del tipo
		LUN, MAR, MER, GIO, VEN, SAB, DOM
	};

	Giorno oggi = LUN;
	oggi = MAR;
//	oggi = 3;	// Errore! enum = const int

	int i = 0;
//	oggi = i;	// Errore! enum = int
	i = oggi;	// 1, conversione implicita

	cout << int(oggi) << '\n';	// 1
	cout << oggi << '\n';		// 1, conversione implicita

	enum {
		ROSSO, GIALLO, VERDE
	} colore;	// Variabile del tipo

	colore = GIALLO;
	cout << colore << '\n';	// 1

	// Impostazione della cifra di partenza

	enum {
		STRANO1 = 10, STRANO2 = 12, STRANO3 /* = 13 */, STRANO4 = 1
	};

	cout << STRANO1 << '\t' << STRANO2 << '\t';
	cout << STRANO3 << '\t' << STRANO4 << '\n';

	return 0;
}
