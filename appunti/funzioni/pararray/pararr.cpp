// pararray/pararr.cpp -- esempio 1/2 per parametri array
// Scrive gli elementi di un dato vettore di interi.

#include <iostream>
using namespace std;

void scrivi(int *v)
{
	cout << '[' << 5 << "] <" << *v;	// v[0]

	for (int i = 1; i < 5; i++)
		cout << ", " << *(v + i);	// v[i]

	cout << ">\n";
}

int main()
{
	int vett[] = { 10, 11 , 12, 11, 10 };
	scrivi(vett);

	return 0;
}