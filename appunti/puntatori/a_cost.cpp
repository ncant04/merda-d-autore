// a_cost.cpp -- puntatori a costanti

#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	const int *p = &i;	// puntatore a costante

	cout << i << '\t' << p << '\n';

	int j;
	j = *p;

	// p non può essere usato per modificare l'oggetto che punta
	// *p = 1;

	const int k = 10;
	const int *q = &k;

	cout << k << '\t' << q << '\n';

	int *qq;
	// qq = &k;

	return 0;
}
