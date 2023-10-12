// convespl.cpp -- conversioni esplicite

#include <iostream>
using namespace std;

int main()
{
	int i = (int) 1.1;	// cast, 1
	float f = float(2);	// Notazione funzionale

	cout << i << '\n' << f << '\n';

	int a, b, c;
	double media;

	cout << "Immetti tre interi: ";
	cin >> a >> b >> c;		// Esempio: 2 3 5

	media = (a + b + c) / 3;	// Divisione tra interi
	cout << media << '\n';		// Esempio: 3

	media = double(a + b + c) / 3;
	cout << media << '\n';		// Esempio: 3.33333

	media = (a + b + c) / 3.0;
	cout << media << '\n';		// Esempio: 3.33333

	return 0;
}
