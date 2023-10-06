/* convimpl.cpp -- conversioni di tipo implicite

Il compilatore effettua determinate conversioni di tipo, senza alcun intervento
da parte dell'utente, nei seguenti casi:

1) se sono presenti operandi di grandezza diversa all'interno di un operazione,
   il tipo più piccolo verrà convertito a quello più grande;

2) in un espressione, in presenza di variabili di tipo reale o intero,
   quest'ultime verranno convertite nel tipo reale;

3) è possibile utilizzare un enumerale e un carattere, qualora servisse un
   intero

4) in un assegnamento, il valore destro dell'espressione verrà convertito nel
   tipo del valore sinistro.  */

// convimpl.cpp -- conversioni di tipo implicite

#include <iostream>
using namespace std;

int main()
{
	int i = 10, j;
	char c = 'd';
	float f = 2.5, h;
	double d = 1.2e+1;

	h = f + 1;
	cout << h << endl;	// 3.5

	d = f + d;
	cout << d << endl;	// 14.5

	d = i + 1;
	cout << j << endl;	// 5

	c = c + 2;
	cout << c << endl;	// f

	return 0;
}
