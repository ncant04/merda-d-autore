// restpunt.cpp -- restituzione di puntatore

#include <iostream>
using namespace std;

int* sel(int s, int* a, int* b, int *c)
{
	if (s < 0)	return a;
	if (s == 0)	return b;

	return c;

	// ritorna l'indirizzo di una variabile definita nel chiamante
}

int main()
{
	int sl, h = 1, k = 10, r = 100;

	cin >> sl;	// -1

	*sel(sl, &h, &k, &r) = 0;

	// es: 0, 10, 100
	cout << h << '\t' << k << '\t' << r << '\n';

	cin >> sl;	// +1
	int i = (*sel(sl, &h, &k, &r))++;

	// es: 0, 10, 101, 100
	cout << h << '\t' << k << '\t' << r << '\t' << i << '\n';

	return 0;
}
