// operatori di assegnamento composto

#include <iostream>
using namespace std;

int main()
{
	int i = 1, j = 10;

	i += 2;			// i = i + 2
	cout << i << '\n';	// 3

	i *= j + 1;		// i = i * (j + 1)
	cout << i << '\n';	// 33

	return 0;
}
