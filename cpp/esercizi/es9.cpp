#include <iostream>
using namespace std;

int main()
{
	char c;

	cout << "Lettera minuscola? ";
	cin >> c;

	if (c >= 'a' && c <= 'z')
	{
		//
		// 'a' : 01100001
		// 0xDF: 11011111
		// 'A' : 01000001
		//
		c &= 0xDF;

		cout << "Maiuscola: " << c << '\n';
	}
	else
	{
		cout << c << "- non una lettera minuscola.\n";
	}

	return 0;
}
