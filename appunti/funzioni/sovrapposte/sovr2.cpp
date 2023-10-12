// sovr2.cpp -- esempio 2/3 di funzioni sovrapposte

#include <iostream>
using namespace std;

// trova il valore massimo
int massimo(const int v[], const int n)
{
	int m = v[0];

	for (int i = 1; i < n; i++)
		m = m >= v[i] ? m : v[i];

	return m;
}

// azzera il primo massimo
int massimo(int v[], const int n)
{
	int m, im = 0;

	for (int i = 1; i < n; i++)
		if (v[im] < v[i])
			im = i;

	m = v[im];
	v[im] = 0;

	return m;
}

void leggi(int v[], const int n)
{
	for (int i = 0; i < n; i++)
		cin >> v[i];
}

void scrivi(const int v[], const int n)
{
	cout << '[' << n << "] <" << v[0];

	for (int i = 1; i < n; i++)
		cout << ", " << v[i];

	cout << ">\n";
}

int main()
{
	const int N = 5;
	const int cv[N] = { 1, 10, 100, 10, 1 };

	cout << massimo(cv, N) << '\n';
	scrivi(cv, N);

	int v[N];

	cout << "Immetti " << N << " elementi: ";

	leggi(v, N);
	cout << massimo(v, N) << '\n';
	scrivi(v, N);

	return 0;
}
