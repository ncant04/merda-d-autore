// arrsize.cpp -- operatore sizeof su array

#include <iostream>
using namespace std;

int main()
{
	int giorniDelMese[] = {
		31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};

	cout << sizeof(int) << '\n';
	cout << sizeof giorniDelMese << '\n';
	cout << sizeof giorniDelMese / sizeof(int) << '\n';
	cout << sizeof giorniDelMese / sizeof(giorniDelMese[0]) << '\n';

	int a[] = {1, 2};
	cout << sizeof a / sizeof(int) << '\n';	// 2 elementi

	int b[5] = {1, 2};
	cout << sizeof b / sizeof(int) << '\n';	// 5 elementi

	return 0;
}
