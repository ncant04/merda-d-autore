// Prototipi di funzioni

#include <iostream>
using namespace std;

// dichiarazione di funzione
int assoluto(int);

int main()
{
	int i;
	cout << "Intero? ";
	cin >> i;

	int j = assoluto(i);
	cout << i << '\n';

	return 0;
}

int assoluto(int n)
{
	// definizione di funzione
	return (n > 0 ? n : -n);
}
