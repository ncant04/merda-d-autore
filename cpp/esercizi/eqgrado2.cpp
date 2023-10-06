#include <iostream>
#include <cmath>	// sqrt()

using namespace std;

int main()
{
	double a, b, c;

	cout << "Coefficienti? ";
	cin >> a >> b >> c;

	if ((a == 0) && (b == 0))
		cout << "Equazione degenere.\n";
	else if (a == 0)
	{
		cout << "Equazione di primo grado.\n";

		double x = -c / b;
		cout << "x: " << x << '\n';
	}
	else
	{
		// double delta = b * b - 4 * a * c;
		double delta = pow(b, 2) - 4 * a * c;

		if (delta < 0)
			cout << "Soluzioni immaginarie\n";
		else
		{
			double = sqrt(delta);
			double x1 = (-b + delta) / (2 * a);
			double x2 = (-b - delta) / (2 * a);

			cout << "x1: " << x1 << '\n';
			cout << "x2: " << x2 << '\n';
		}
	}

	return 0;
}
