// if innestati

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if (a > 0)
		if (b > 0)
			a++;
		else
			b++;

	cout << a << '\t' << b << '\n';
	return 0;
}
