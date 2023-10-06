// rel_log.cpp -- operatori relazionali e logici

#include <iostream>
using namespace std;

// 0 = falso, 1 = vero

int main()
{
	int i, j = 0, h, k, t;

	i = 10;
	h = i > 3 && j < 5;	// 1
	// forma equivalente: (i > 3) && (j < 5)

	cout << "h = " << h << endl;

	i = 1;
	k = i >= 2 && j <= 1;	// 0
	// forma equivalente: (i >= 2) && (j <= 1)

	cout << "k = " << k << endl;

	i = 10;
	k = i || j;	// 1
	t = !i;		// 0

	cout << "k = " << k << '\t' << "t = " << t << endl;

	int m = 'a' < 'b';	// 1
	int n = 'a' > 'c';	// 0

	cout << "m = " << m << '\t' << "n = " << n << endl;

	int a = 0, b = 1, c;
	c = a && b || !a;	// 1
	// forma equivalente: (a && b) || (!a)

	cout << "c = " << c << endl;

	cin >> i;
	j = 0 < i < 10;
	cout << j << endl;

	return 0;
}
