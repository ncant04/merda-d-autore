/* incdec.c */

#include <stdio.h>

int main()
{
	int n;

	n = 1;
	printf("%d\n", n++);	/* stampa 1, ma successivamente n = 2 */

	n = 1;
	printf("%d\n", ++n);	/* stampa 2 e successivamente n = 2 */

	n = 1;
	printf("%d\n", n--);	/* stampa 1, ma successivamente n = 0 */

	n = 1;
	printf("%d\n", --n);	/* stampa 0 e successivamente n = 0 */

	return 0;
}
