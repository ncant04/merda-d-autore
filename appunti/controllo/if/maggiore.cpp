// Legge due numeri e scrive il maggiore

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	cout << "maggiore: ";

	if (a > b)
		cout << a << '\n';
	else
		cout << b << '\n';

	return 0;
}
