// puntcost.cpp -- puntatori costanti
// per maggiori informazioni sugli errori, vedi puntcost.txt

#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	int *const p = &i;	// puntatore costante

	cout << *p << '\n';	// 1

	*p = 10;
	cout << *p << '\n';	// 10

	// errori
/*
	int j = 10;
	p = &j;

	int *const q;
	q = p;
*/
	return 0;
}
