// scrive asterischi (in cascata)

#include <iostream>
using namespace std;

int main()
{
	int i;
	cin >> i;

	switch (i) {
		case 3:	// in cascata
			cout << '*';
		case 2:	// in cascata
			cout << '*';
		case 1:
			cout << '*';
			break;
		default:
			cout << '!';
	}

	cout << '\n';
	return 0;
}
