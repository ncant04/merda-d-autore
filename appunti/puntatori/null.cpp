// puntatori NULL

#include <iostream>
using namespace std;

int main()
{
	int *q;
	// cout << *q << '\n';	// segfault

	int *p = NULL;		// int *p = 0
	// cout << *p << '\n';	// segfault

	if (p == NULL)
		cout << "nulla\n";

	if (p == 0)
		cout << "zilch\n";

	if (!p)
		cout << "goose eggs\n";

	return 0;
}
