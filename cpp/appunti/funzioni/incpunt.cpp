// incpunt.cpp -- incrementa il maggiore tra due numeri (mediante puntatori)

#include <iostream>
using namespace std;

void incrementa(int* a, int* b)
{
	*a > *b ? (*a)++ : (*b)++;
}

int main()
{
	int i, j;

	cout << "Dammi due interi: ";
	cin >> i >> j;
	incrementa(&i, &j);

	cout << i << '\t' << j << '\n';
	return 0;
}
