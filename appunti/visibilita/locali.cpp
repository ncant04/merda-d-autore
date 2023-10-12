// Variabili locali

#include <iostream>
using namespace std;

void f()
{
    // Nasce solo... e muore solo!
    int stronzo = 2;

    cout << stronzo << '\n';  // 2
}

int main()
{
    // Errore! Identificatore non dichiarato.
    // cout << stronzo << '\n';

    int i = 1, j = 5;
    cout << i << '\t' << j << '\n';         // 1 5
    {
        cout << i << '\t' << j << '\n';     // 1 5

        int i = 10;
        cout << i << '\n';                  // 10
    }

    cout << i << '\n';                      // 1
    f();
    cout << i << '\n';                      // 1
}
