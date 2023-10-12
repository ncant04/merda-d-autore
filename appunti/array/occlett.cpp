// occlett.cpp
// conta le occorrenze di ciascuna lettera in una stringa data

#include <iostream>
using namespace std;

int main()
{
	const int LETTERE = 26;
	char str[100];
	int i, conta[LETTERE];

	// inizializza array
	for (i = 0; i < LETTERE; ++i)
		conta[i] = 0;

	cout << "? ";
	cin >> str;

	// che orrore...

	for (i = 0; str[i] != '\0'; ++i)
		if (str[i] >= 'a' && str[i] <= 'z')
			++conta[str[i] - 'a'];
		else if (str[i] >= 'A' && str[i] <= 'Z')
			++conta[str[i] - 'A'];

	for (i = 0; i < LETTERE; ++i)
		cout << char('a' + i) << ": " << conta[i] << '\n';

	return 0;
}
