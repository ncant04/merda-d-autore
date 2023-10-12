// Calcola il massimo termine della successione di Fibonacci minore o uguale
// al dato intero positivo n

#include <iostream>
using namespace std;

int main()
{
	int i, j = 0, s = 1, n;

	cin >> n;

	do {
		i = j;
		j = s;
	} while ((s = i + j) <= n);

	// il ciclo termina quando l'espressione condizionale diventa falsa

	cout << s << '\n';

	return 0;
}
