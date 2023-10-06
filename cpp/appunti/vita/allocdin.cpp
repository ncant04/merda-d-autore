// allocazione dinamica

#include <iostream>
using namespace std;

int main()
{
	int* p = new int;
	*p = 10;
	cout << *p << '\n';

	/* ... */

	delete p;

	// delete p;	// free(): double free detected in tcache 2
			// Aborted

	int* q = new int[10];

	/* ... */

	delete [ ] q;

	int i = 0;
	int* pi = &i;
	cout << *pi << endl;

	// delete pi;	// munmap_chunk(): invalid pointer
			// Aborted

	return 0;
}
