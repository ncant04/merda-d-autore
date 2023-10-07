/* tipi.cpp -- elenco dei tipi fondamentali

	tipo =	coppia di insiemi: uno di valori ed uno di operazioni
		che lavorano sui valori. */

#include <iostream>
using namespace std;

int main()
{
	//
	// Tipi interi
	//

	int i;
	int j = 7;	// inizializzazione - NON un assegnazione
	int i1(5);	// inizializzazione - NON un assegnazione
	int i2 = 0, i3;	// solo i2 inizializzata

	i2 = i1 * 2;	// assegnazione
	i3 = 1 / 2;	// 0, divisione intera

	short int	s1	= 1;
	short		s2	= 2;
	long int	ln1	= 7777;
	long		ln2	= 7778L;	// letterale long int, suffisso L
	int		ott	= 011;		// letterale int ottale, prefisso 0
	int		esad	= 0xF;		// letterale int esadecimale

	cout << ott < '\t' << esad << '\n';	// stampa (in base 10)


	//
	// Tipi interi senza segno (usati nelle matrici di bit)
	//



    //
    // 1.2 Tipi interi senza segno (usati nelle matrici di bit)
    //

    unsigned int        u1 = 1U;    // Letterale unsigned int, suffisso U (u)
    unsigned u = 2;

    unsigned short int  u3 = 3;
    unsigned short      u4 = 4;
    unsigned long int   u5 = 7779;

    // Letterale unsigned long int, suffisso UL (ul)
    unsigned long       u6 = 7779UL;

    //
    // 1.3 Tipi in virgola mobile
    //

    //  Tipo            dimensioni (bit)
    //  --------------------------------
    //  double       -> 64
    //  float        -> 32
    //  long double  -> 80

    double d = 2.2;
    double d1 = -14.12e-2, d2 = 2.62, d3 = .5, d4 = 6.;

    float f = -1.1F;
    float g = f - 12.12F;           // Letterale float, suffisso F
    float h = 1.0 / 2.0;            // 0.5, divisione in virgola mobile

    long double k = +0.1;
    long double m = 1.23e+12L;      // Letterale long double, suffisso L

    //
    // 1.4 Caratteri (ASCII)
    //

    // Valore posizione nella tabella ASCII

    char c = 'f', d = '\n', e = '\t';
    char f ='\x40';         // '@' (in esadecimale)
    char g = '\100';        // '@' (in ottale)
    char h = 64;            // '@' (in decimale)

    cout << c << e << f << e << g << e << h << d;

    // Posizionamento nella tabella ASCII

    char c1 = c + 1;        // 'g'
    char c2 = c - 2;        // 'd'
    char c3 = 4 * d + 3;    // Attenzione! '+'
    int test = c - 'a';     // distanza tra caratteri (5)

    cout << c1 << e << c2 << e << c3 << d;

    //
    // 1.7 Costanti
    //

    const int i = 0;
    const long double e = 2.718;
    const long double e2 = 2 * e;

    i = 5;          // Errore!
    const int j;    // Errore!

    return 0;
}
