// puntstr.cpp -- puntatori a stringa

#include <iostream>
using namespace std;

int main()
{
	char s1[] = "Nico";
	char s2[] = { 'p', 'o', 'i', '\0' };

	char* s3 = "ieri";
	char* s4 = "domani";

	cout << s1 << '\n' << s2 << '\n' << s3 << '\n' << s4 << '\n';

//	s2 = s3;
	s4 = s3;	// OK

	cout << s3 << '\n';	// ieri
	cout << s4 << '\n';	// ieri

	s4 = "Lorem ipsum";
	cout << s4 << '\n';

	cout << (void*)s3 << '\n';

	return 0;
}
