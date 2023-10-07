// initpunt.cpp -- inizializza a 1

#include <iostream>
using namespace std;

int main()
{
	const int N = 5;
	int v[N];

	int* p = v;
	while (p <= &v[N - 1])
		*p++ = 1;	// *(p++)

	p = v;

	cout << '[' << N << "] <" << *p;
	for (int i = 1; i < N; i++)
		cout << ", " << *(p + i);

	cout << ">\n";

	return 0;
}
