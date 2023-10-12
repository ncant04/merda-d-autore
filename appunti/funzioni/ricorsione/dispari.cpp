#include <iostream>
using namespace std;

// dispari: ritorna 1 se n è dispari, altrimenti ritorna 0
int dispari(int n)
{
	return (n < 2) ? n : dispari(n - 2);
}

int main()
{
	for (int i = 0; i <= 10; i++)
	{
		cout << i << '\t';

		if (dispari(i))
			cout << "dispari\n";
		else
			cout << "pari\n";
	}

	return 0;
}
