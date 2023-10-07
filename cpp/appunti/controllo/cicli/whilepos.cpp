// whilepos.cpp -- legge e scrive interi non negativi

#include <iostream>
using namespace std;

int main()
{
	int i;

	cout << "? ";
	cin >> i;

	while (i >= 0) {
		cout << i << '\n';
		cout << "? ";
		cin >> i;
	}

	return 0;
}
