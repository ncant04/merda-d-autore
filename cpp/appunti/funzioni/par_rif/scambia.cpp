// par_rif/scambia.cpp

void scambia(int& a, int& b)
{
	int c = a;
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
