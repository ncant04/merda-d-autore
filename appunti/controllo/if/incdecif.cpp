// incdecif.cpp -- incrementa o decrementa

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if (a >= b) {	// blocco
		a++;
		b++;
	} else {	// blocco
		a--;
		b--;
	}

	cout << "a = " << a << '\t' << "b = " << b << '\n';
	return 0;
}
