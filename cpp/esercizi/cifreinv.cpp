#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Numero intero? ";
	cin >> n;

	int i = n >= 0 ? n : -n;

	do {
		cout << i % 10 << '\n';
		i /= 10;
	} while (i > 0);

	return 0;
}
