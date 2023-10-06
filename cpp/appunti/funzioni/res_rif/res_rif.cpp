// restituzione di riferimento

#include <iostream>
using namespace std;

// seleziona a, b oppure c in base al valore negativo, nullo o positivo di s
int& sel(int s, int& a, int& b, int& c)
{
	if (s < 0)
		return a;	// riferimento

	if (s == 0)
		return b;	// riferimento

	return c;
}

int main()
{
	int sl, h = 1, k = 10, r = 100;

	cin >> sl;
	sel(sl, h, k, r) = 0;

	cout << h << '\t' << k << '\t' << r << '\n';

	cin >> sl;
	int i;
	i = sel(sl, h, k, r)++;

	cout << h << '\t' << k << '\t' << r << '\t' << i << '\n';

	return 0;
}
