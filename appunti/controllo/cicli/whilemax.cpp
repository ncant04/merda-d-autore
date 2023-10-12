/*
	whilemax.cpp

	Calcola il massimo m tale che la somma dei primi m interi positivi
	sia minore o uguale al dato intero positivo n.
*/

#include <iostream>
using namespace std;

int main()
{
	int somma = 0, m = 0, n;

	cin >> n;

	while (somma <= n)
		somma += ++m;	// somma = somma + (++m)

	m--;
	cout << m << '\n';

	return 0;
}
