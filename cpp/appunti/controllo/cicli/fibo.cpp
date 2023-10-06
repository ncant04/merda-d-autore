// calcola il massimo termine della successione di Fibonacci minore o uguale
// al dato intero positivo n

#include <iostream>
using namespace std;

int main()
{
	int i = 0, j = 1, s, n;

	cin >> n;

	while ((s = i + 1) <= n) {
		i = j;
		j = s;
	}

	cout << j << '\n';

	return 0;
}
