// "cortocircuito" negli operatori logici

#include <iostream>
using namespace std;

int main()
{
	int i, j;
	cin >> i;

	j = (i < 0) || (i > 100);
	cout << j << endl;

	j = (i >= 0) && (i <= 100);
	cout << j << endl;

	j = (i != 0) && (200 / i > 10);
	cout << j << endl;

	j = (200 / i > 10) && (i != 0);	// NO! Se i = 0, 200 / i = ∞
	cout << j << endl;		// Floating point exception

	return 0;
}
