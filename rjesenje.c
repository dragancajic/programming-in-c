// rjesenje.c by Драган Ћајић <http://learn-pisio.eu5.org/>
// Program racuna aritmeticku sredinu cijelih brojeva djeljivih sa 3
// iz proizvoljno odabranog segmenta [k, n] za k < n.
#include <stdio.h>

/**
 * @author: Драган Ћајић
 * @datetime: 2:18 AM December 2, 2020
 * @modified: 12:51 AM March 2, 2021
 * @subject: Програмирање на језику C!
 */

int main(void) {
	// deklaracija i inicijalizacija varijabli
	//int i = 0; // pomocna varijabla <-- NE OVDE, nego
	// neposredno na mjestu upotrebe (Mayfly Variable)! <== Clean Coding Principle!
	int k, n;  // opseg brojeva k < n
	int zbir = 0;
	int broj = 0; // brojac clanova u zbiru

	// unos podataka
	printf("Prvi broj: ");
	scanf("%d", &k);

	printf("Drugi broj: ");
	scanf("%d", &n);

	// test*
	//printf("%d\n", k);
	//printf("%d", n);

	while (k >= n) {
		printf("Ponovo unesite opseg brojeva!\n");
		printf("Prvi broj: ");
		scanf("%d", &k);

		printf("Drugi broj: ");
		scanf("%d", &n);
	}

	// test**
	//printf("%d\n", k);
	//printf("%d", n);

	// obrada
	int i;
	for (i = k; i <= n; i++) {
		if (i % 3 == 0) {
			zbir += i;
			broj++;
		}
	}

	// ispis na konzolu
	if (broj == 0) {
		printf("\nU segmentu [%d,%d] nema brojeva djeljivih sa 3!", k, n);
	} else {
		printf("\nUkupno brojeva djeljivih sa 3 u segmentu ima: %d\n", broj);
		printf("Suma brojeva iz segmenta djeljivih sa 3 iznosi: %d\n", zbir);
		printf("\nAritmeticka sredina brojeva djeljivih sa 3 iz segmenta [%d, %d] je: ", k, n);
		printf("%.2f", (1.0*zbir) / broj);
	}

	return 0;
}
