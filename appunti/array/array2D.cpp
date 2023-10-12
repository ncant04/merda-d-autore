// array2D.cpp -- array a due dimensioni

#include <iostream>
using namespace std;

int main()
{
	const int R = 2, C = 3;
	int m[R][C];
	int i, j;

	// lettura
	for (i = 0; i < R; i++)
		for (j = 0; j < C; j++)
			cin >> m[i][j];

	// stampa
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++)
			cout << m[i][j] << '\t';

		cout << '\n';
	}

	return 0;
}
