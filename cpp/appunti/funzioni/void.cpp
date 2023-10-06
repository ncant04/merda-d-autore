#include <iostream>
using namespace std;

void scrivi_asterischi(int n)
{
	for (int i = 0; i < n; i++)
		cout << '*';
}

int main()
{
	int i;

	cout << "? ";
	cin >> i;

	scrivi_asterischi(i);
	cout << '\n';

	return 0;
}
