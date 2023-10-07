// incdec.cpp -- operatori di incremento e decremento

#include <iostream>
using namespace std;

int main()
{
	int i = 0, j = 0;

	j = ++i;	// i = i + 1; j = i
	cout << "i = " << i << '\t' << "j = " << j << '\n';

	i = 0;
	j = i++;	// j = i; i = i + 1;
	cout << "i = " << i << '\t' << "j = " << j << '\n';

	return 0;
}
