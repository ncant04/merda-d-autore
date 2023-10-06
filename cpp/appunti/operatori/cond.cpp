// operatori condizionali

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;

	// leggi due interi ed incrementa il maggiore

	cout << "Dammi due interi: ";
	cin >> a >> b;

	a >= b ? a++ : b++;

	cout << "a = " << a << '\t' << "b = " << b << '\n';

	// massimo fra tre interi

	cout << "Ok. Dammi tre interi ora: ";
	cin >> a >> b >> c;

	d = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

	cout << "Maggiore: " << d << '\n';

	return 0;
}
