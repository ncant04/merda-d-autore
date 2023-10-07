#include <iostream>
using namespace std;

int main()
{
	char c;

	cout << "Carattere? ";
	cin >> c;

	if (c >= 'a' && c <= 'z')
		c -= 'a' - 'A';
	else if (c >= 'A' && c <= 'Z')
		c += 'a' - 'A';

	cout << c << '\n';
	return 0;
}
