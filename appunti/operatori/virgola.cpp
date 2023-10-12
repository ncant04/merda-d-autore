// operatore virgola

#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;

	/*
	 * se a > 0:
	 *	incrementa a e b
	 *
	 * altrimenti:
	 *	decrementa a e b
	 */
	a > b ? (a++, b++) : (a--, b--);
	cout << a << '\t' << b << '\n';


	cin >> a >> b;

	/*
	 * ATTENZIONE!
	 *
	 * se a > 0:
	 *	incrementa a e b
	 *
	 * altrimenti:
	 *	decrementa SOLO b
	 *
	 * b viene decrementato (b--) sempre, in quanto la virgola
	 * termina l'operatore condizionale dopo a--
	 */
	a > b ? a++, b++ : a--, b--;
	cout << a << '\t' << b << '\n';

	return 0;
}
