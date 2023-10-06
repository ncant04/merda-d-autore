// Non compilare!

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	while (n--)	// non termina se n < 0
		cout << '*';

	cout << '\n';

	return 0;
}
