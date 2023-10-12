// parametri di default

#include <iostream>
using namespace std;

// Regola 1:
// nella lista di argomenti, quelli di default devono essere gli ultimi.

double perimetro(int nLati = 3, double lunghezzaLato = 1.0)
{
	return nLati * lunghezzaLato;
}

// Regola 2:
// in una chiamata, gli argomenti mancanti devono essere gli ultimi.

/*
double perimetro(int nLati = 3, double lunghezzaLato)	// Errore!
{
	return nLati * lunghezzaLato;
}
*/

int main()
{
	double perim1 = perimetro(4, 2.5);	// Quadrato di lato 2.5
	double perim2 = perimetro(3);		// Triangolo di lato 1.0
	double perim3 = perimetro();		// Triangolo di lato 1.0
	double perim4 = perimetro(4.1);		// Occhio! Quadrato di lato 1.0

	cout << perim1 << '\n' << perim2 << '\n';
	cout << perim3 << '\n' << perim4 << '\n';

	return 0;
}
