// operatore virgola

#include <iostream>
using namespace std;

int main()
{
	int a, b;

	//
	// Esempio 1:
	//

	cin >> a >> b;

	a > b ? (a++, b++) : (a--, b--);
	/*
		se a > 0:
			incrementa a e b
		altrimenti:
			decrementa a e b
	*/

	cout << "a = " << a << '\t' << "b = " << b << '\n';

	//
	// Esempio 2:
	//

	cin >> a >> b;

	a > b ? a++, b++ : a--, b--;
	/*
		ATTENZIONE!

		se a > 0:
			incrementa a e b
		altrimenti:
			decrementa SOLO b

		b viene decrementato (b--) sempre, in quanto la virgola
		termina l'operatore condizionale dopo a--
	*/

	cout << "a = " << a << '\t' << "b = " << b << '\n';
	return 0;
}
