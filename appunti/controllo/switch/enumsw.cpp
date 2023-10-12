#include <iostream>
using namespace std;

int main()
{
	enum {
		ROSSO, GIALLO, VERDE
	} colore;

	colore = GIALLO;

	switch (colore) {
		case ROSSO:
			cout << "rosso\n";
			break;

		case GIALLO:
			cout << "giallo\n";
			break;

		case VERDE:
			cout << "verde\n";
			break;
	}
	return 0;
}
