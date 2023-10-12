// Variabili globali

#include <iostream>
using namespace std;

// Variabile globale
int i = 1;

int main()
{
    cout << i << '\n';          // 1
    {
        int i = 10;             // Variabile locale
        cout << i << '\n';      // 10

        {
            int i = 100;
            cout << i << '\n';  // 100
        }

        cout << i << '\n';      // 10
    }

    cout << i << '\n';          // 1

    return 0;
}
