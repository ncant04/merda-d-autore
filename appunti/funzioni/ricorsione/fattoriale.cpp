// fattoriale (con ricorsione)

#include <iostream>
using namespace std;

int fatt(int n)
{
	return (n < 2) ? 1 : n * fatt(n - 1);
}

int main()
{
	for (int i = 0; i <= 10; i++)
		cout << i << '\t' << fatt(i) << '\n';

	return 0;
}
