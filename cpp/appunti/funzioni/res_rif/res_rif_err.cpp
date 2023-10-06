#include <iostream>
using namespace std;

int& f()
{
	int i = 0;

	/* ... */

	// Attenzione! Ritorna un riferimento ad una variabile locale.
	return i;
}

int main()
{
	cout << f() << '\n';
	return 0;
}
