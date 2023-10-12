// passaggio di parametri per valore

#include <iostream>
using namespace std;

int h, k;

int fatt(int n)
{
	int result = 1;

	for (int i = 2; i <= n; i++)
		result *= i;

	return (result);
}

int main()
{
	int f;

	cin >> h >> k;
	f = fatt(h);

	cout << f << '\n';

	f = fatt(k);
	cout << f << '\n';

	return 0;
}
