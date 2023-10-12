#include <iostream>
using namespace std;

/* somma: somma gli elementi di un dato vettore di interi */
int somma(const int v[], int nElementi)
{
	if (nElementi == 1)
		return v[0];

	return (v[nElementi - 1] + somma(v, nElementi - 1));
}

void leggi(int v[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> v[i];
}

int main()
{
	int nElem;

	cout << "Quanti elementi? ";
	cin >> nElem;

	nElem = nElem <= 0 ? 1 : nElem;
	int *vett = new int[nElem];

	cout << "Elementi interi? ";
	leggi(vett, nElem);

	for (int i = 2; i <= nElem; i++) {
		cout << "Somma dei primi " << i;
		cout << " elementi: " << somma(vett, i) << '\n';
	}

	return 0;
}
