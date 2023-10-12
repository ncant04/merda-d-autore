// Variabili locali statiche

#include <iostream>
using namespace std;

int ContaChiamateErrata()
{
	// Classe automatica.
	int n = 0;
	return ++n;
}

int ContaChiamate()
{
	// Classe statica.
	// Ha visibilità locale, ma tempo di vita globale.
	static int n = 0;
	return ++n;
}

int main()
{
	int i;

	for (i = 0; i < 5; i++)
		cout << ContaChiamateErrata() << '\t';	// 1 1 1 1 1

	cout << '\n';

	for (i = 0; i < 5; i++)
		cout << ContaChiamate() << '\t';	// 1 2 3 4 5

	cout << '\n';

	return 0;
}
