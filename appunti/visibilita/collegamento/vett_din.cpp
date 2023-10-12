// vettori dinamici

#include <iostream>
using namespace std;

int main()
{
	int nElem;

	cout << "Dimensione del vettore? ";
	cin >> nElem;

	int *p = new int[nElem];


	// Perché posso usare le quadre nei vettori dinamici?
	//
	// p[i] <--> *(p + i)
	//
	// Nell'heap, p corrisponde al primo elemento del vettore, e così via.

	for (int i = 0; i < nElem; i++)
	{
		// Oppure: *(p + i) = i
		p[i] = i;
	}

	// Stampa il vettore:

	cout << '[' << nElem << "] <" << *p;

	for (int i = 1; i < nElem; i++)
		cout << ", " << p[i];

	cout << ">\n";

	delete [] p;
	return 0;
}
