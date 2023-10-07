// whileast.cpp -- scrive n asterischi, con n dato (in tre modi diversi)

#include <iostream>
using namespace std;

int main()
{
	int n, i = 0;

	// Esempio 1:

	cin >> n;
	while (i < n) {
		cout << '*';
		i++;
	}

	// n conserva il valore iniziale.
	// Il ciclo termina quando l'espressione condizionale diventa falsa.

	cout << '\n';

	// Esempio 2:

	cin >> n;
	while (n > 0) {
		cout << '*';
		n--;
	}			// al termine, n vale 0

	cout << '\n';

	// Esempio 3:

	cin >> n;
	while (n-- > 0)		// prima restituisci, poi decrementa
		cout << '*';	// al termine, n vale -1

	cout << '\n';

	return 0;
}
