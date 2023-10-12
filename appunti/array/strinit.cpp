// lunghezza ed inizializzazione di stringhe
// g++ -Ofast strinit.cpp

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char c1[] = "C++";

	cout << sizeof c1 << '\n';
	cout << strlen(c1) << '\n';

	char c2[] = { 'C', '+', '+' };	// manca il terminatore
	cout << strlen(c2) << '\n';	// vediamo dove si ferma...

	char c3[] = { 'C', '+', '+', '\0' };
	cout << sizeof c3 << '\n';

	return 0;
}
