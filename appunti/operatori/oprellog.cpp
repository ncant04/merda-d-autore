// oprellog.cpp -- operatori relazionali e logici

#include <iostream>
using namespace std;

int main()
{
    // Nel C++, i valori booleani sono rappresentati come segue:
    // 0 = FALSO, 1 = VERO

    int i, j = 0, h, k, t;

    i = 10;
    h = i > 3 && j < 5;     // VERO
                            // Forma equivalente: (i < 3) && (j < 5)
    cout << h << '\n';

    i = 1;
    k = i >= 2 && j <= 1;   // FALSO
                            // Forma equivalente: (i >= 2) && (j <= 1)
    cout << k << '\n';

    i = 10;
    k = i || j;             // 1
    t = !t;                 // 0
    cout << k << '\t' << t << '\n';

    // Tabella ASCII

    int m = 'a' < 'b';      // VERO
    int n = 'a' > 'c';      // FALSO

    cout << m << '\t' << n << '\n';

    //----------------------------------------------------------------------

    int a = 0, b = 1, c;

    c = a && b || !a;       // VERO
                            // Forma equivalente: (a && b) || (!a)
    cout << c << '\n';

    cout << "Immetti un numero: ";
    cin >> i;

    j = 0 < i < 10;
    cout << j << endl;

    return 0;
}