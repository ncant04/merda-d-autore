// Somma gli interi compresi tra i dati interi n ed m, estremi inclusi, con n <= m

#include <iostream>
using namespace std;

int somma_interi(int n, int m)
{
	int s = n;

	for (int i = n + 1; i <= m; i++)
		s += 1;

	return s;
}

int main()
{
	int a, b;

	cout << "? ";
	cin >> a >> b;

	cout << somma_interi(a, b) << '\n';
	return 0;
}
