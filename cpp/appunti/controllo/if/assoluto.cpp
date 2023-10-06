// valore assoluto

#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	if (num < 0)		// "if" senza "else"
		num = -num;

	cout << num << '\n';
	return 0;
}
