#include <iostream>
using namespace std;

int main()
{
	char c;

	cout << "Lettera maiuscola? ";
	cin >> c;

	if (c >= 'A' && c <= 'Z')
	{
		//
		// 'A' : 01000001
		// 0x20: 00100000
		// 'a' : 01100001
		//
		c |= 0x20;

		cout << "Minuscola: " << c << '\n';
	}
	else
	{
		cout << c << "- non una lettera maiuscola.\n";
	}

	return 0;
}
