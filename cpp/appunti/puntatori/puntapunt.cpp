// puntatori a puntatori

#include <iostream>
using namespace std;

int main()
{
	int i = 1, j = 10;
	int *pi = &i, *pj = &j;

	int **q = &pi;
	*q = pj;

	cout << **q << '\n';	// 10

	return 0;
}
