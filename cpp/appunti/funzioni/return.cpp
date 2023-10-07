#include <iostream>
using namespace std;

/*
 * ritorna -1, 0 oppure 1 in base al valore negativo, nullo o positivo
 * di un dato intero n
 */
int segno(int n)
{
	if (n > 0)	return 1;
	if (n == 0)	return 0;

	return -1;
}

int main()
{
	int i;
	cin >> i;

	switch (segno(i)) {
	case 1:
		cout << "Valore positivo.\n";
		break;
	case 0:
		cout << "Valore nullo.\n";
		break;
	case -1:
		cout << "Valore negativo.\n";
		break;
	}

	return 0;
}
