// Scrive asterischi (con switch)

#include <iostream>
using namespace std;

int main()
{
	int i;
	cin >> i;

	switch (i) {
	case 1:
		cout << '*';
		break;
	case 2:
		cout << "**";
		break;
	case 3:
		cout << "***";
		break;
	default:
		cout << '!';

	cout << '\n';
	return 0;
}
