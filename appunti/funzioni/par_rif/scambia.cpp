// par_rif/scambia.cpp
// Per maggiori informazioni, vedi scambia.txt

void scambia(int& a, int& b)
{
	// a diventa un sinonimo per i, b diventa un sinonimo per j

	int c = a;	// unica variabile realmente creata
	a = b;
	b = c;
}

int main()
{
	int i, j;

	cin >> i >> j;
	scambia(i, j);

	cout << i << '\t' << j << '\n';
	return 0;
}
