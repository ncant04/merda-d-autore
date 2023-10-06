#include <iostream>
using namespace std;

int main()
{
	int i = 1;

	// salva l'indirizzo in memoria di i nel puntatore p
	int* p = &i;

	// puntatore di indirezione (*)
	*p = 10;

	cout << i << '\t' << *p << '\n';
	cout << "indirizzo: " << p << '\n';

	int *p1;	// puntatore di interi
	int* p2;
	int * p3;

	int *q1, *q2;	// due puntatori
	int* q3, q4;	// un puntatore e un intero

	return 0;
}
