// enum.cpp -- tipi enumerati

#include <iostream>
using namespace std;

int main()
{
    enum Giorno /* Nome del tipo */ {
        LUN, MAR, MER, GIO, VEN, SAB, DOM
    };

    Giorno oggi = LUN;
    oggi = DOM;
    // oggi = 3     // Errore! enum = const int

    int i = 0;
    i = oggi;       // 6, conversione implicita
    // oggi = i;    // Errore! enum = int

    cout << i << '\t' << oggi << '\n';

    //----------------------------------------------------------------------

    enum {
        ROSSO, GIALLO, VERDE
    } colore;       // Variabile del tipo

    colore = GIALLO;
    cout << colore << '\n';

    //----------------------------------------------------------------------
    // Impostazione della cifra di appartenza

    enum {
        STRANO1 = 10, STRANO2 = 12, STRANO3 /* = 13 */, STRANO4 = 1
    };

    cout << STRANO1 << '\t' << STRANO2 << '\n';
    cout << STRANO3 << '\t' << STRANO4 << '\n';

    return 0;
}
