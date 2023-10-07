// puntfunc.cpp -- passaggio di parametri mediante puntatori

#include <iostream>
using namespace std;

// scambia due interi
void scambia(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int i, j;

	cout << "Dammi due interi: ";
	cin >> i >> j;
	scambia(&i, &j);

	cout << i << '\t' << j << '\n';
	return 0;
}
