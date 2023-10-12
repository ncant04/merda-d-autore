// funzioni in linea

#include <iostream>
using namespace std;

inline int assoluto(int n)
{
	// Il compilatore può sostituire alla chiamata il corpo della funzione.
	return (n >= 0 ? n : -n);
}

int main()
{
	int a;
	cout << "Intero? ";
	cin >> a;

	cout << assoluto(a) << '\n';
	return 0;
}
