// sovr.cpp -- esempio 1/3 di funzioni sovrapposte

#include <iostream>
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

double max(double a, double b)
{
	return (a > b ? a : b);
}

/*
int max(double a, double b)
{
	return (int)(a > b ? a : b);
}
*/

int main()
{
	int h, k;

	cin >> h >> k;
	cout << max(h, k) << '\n';

	double d, e;

	cin >> d >> e;
	cout << max(d, e) << '\n';

	return 0;
}
