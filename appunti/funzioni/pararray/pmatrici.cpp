// Parametri array multidimensionali (mediante puntatori)

#include <iostream>
using namespace std;

void riempi(int* m, const int righe, const int colonne)
{
	for (int i = 0; i < righe; ++i)
		for (int j = 0; j < colonne; ++j)
			*(m + i * colonne + j) = i + j;
}

void scrivi(const int* m, const int righe, const int colonne)
{
	for (int i = 0; i < righe; ++i) {
		for (int j = 0; j < colonne; ++j)
			cout << *(m + i * colonne + j) << '\t';

		cout << '\n';
	}
}

int main()
{
	int mat[6][3];

	// Passa il primo elemento della matrice
	riempi(&mat[0][0], 6, 3);

	scrivi((int*)mat, 6, 3);

	return 0;
}
