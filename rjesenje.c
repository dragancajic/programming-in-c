// rjesenje.c by Драган Ћајић <http://learn-pisio.eu5.org/>
#include <stdio.h>

/**
 * @author: Драган Ћајић
 * @datetime: 2:18 AM December 2, 2020
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
    printf("%d\n", zbir);
    printf("%d\n", broj);
    printf("Aritmeticka sredina brojeva djeljivih sa 3 iz segmenta [%d, %d] je: ", k, n);
    printf("%.2f", (1.0*zbir) / broj);

	return 0;
}
