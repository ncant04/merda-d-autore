// proprietà degli operatori

#include <iostream>
using namespace std;

int main()
{
	// precedenza

	int i = 1, j;

	j = 3 * i + 1;
	cout << j << endl;	// 4

	j = 3 * (i + 1);
	cout << j << endl;	// 6

	// associatività

	double e = 27.0, f = 3.0, g;

	g = e / f / 2;
	cout << g << endl;	// 4.5

	g = e / f * 2;
	cout << g << endl;	// 18

	g = e / (f * 2);
	cout << g << endl;	// 4.5

	return 0;
}
