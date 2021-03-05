// saberi.c by Драган Ћајић <http://learn-pisio.eu5.org/>
// Program sabira odabrani broj proizvoljno unesenih sabiraka.
#include <stdio.h>

/**
 * @author: Драган Ћајић
 * @datetime: 9:51 PM March 1, 2021
 * @modified: 11:32 PM March 5, 2021
 * @subject: Програмирање на језику C!
 */

int main(void) {
	// deklaracija i inicijalizacija varijabli
	// (za koje poznajemo njihovu vrijednost)
    int no, sabirak;
    int suma = 0;

	// unos podataka
	printf(" unesi broj sabiraka: ");
	scanf("%d", &no);

	// unos podataka i obrada (interaktivnost)
	printf(" unesi redom sabirke [sabirak, pa ENTER, ...]:\n");

	// lokalnom varijablu definisati sto blize mjestu primjene:
	int i; // <-- (Mayfly Variable)! <== Clean Coding Principle!
	for (i = 1; i <= no; i++) {
		scanf("%d", &sabirak);
		suma = suma + sabirak;
	}

	// ispis na konzolu
	printf(" zbir je: %d", suma);

	return 0;
}
