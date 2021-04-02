// cifre1.c by Драган Ћајић <http://learn-pisio.eu5.org/>
// Program izracunava proizvod cifara cijelog broja veceg od 9 koriscenjem
// do-while petlje, while petlje i for petlje. <-- CIKLICKA STRUKTURA PROGRAMA
// Program napisati u interaktivnom obliku.    <-- POSTIZANJE INTERAKTIVNOSTI!
#include <stdio.h>

/**
 * @author: Драган Ћајић
 * @datetime: 2:56 PM April 2, 2021
 * @subject: Програмирање на језику C!
 * @description: Program racuna proizvod cifara broja > 9.
 */

int main(void) {
	// deklaracija i inicijalizacija varijabli
	int broj = 0;
	int trenutnaCifra = 0;
	int proizvod = 1;

	// Budite ljubazni! :-)
	// Be polite and nice!!
	printf("DOBAR DAN! KAKO STE?\n");

	printf("\n"); // prazna linija

	// ~ unos podataka
	printf("Unesite broj veci od 9 : ");
	scanf("%d", &broj);

	while (broj <= 9) { // provjera unosa
		printf("GRESKA! CIJELI broj > 9: ");
		scanf("%d", &broj);
	}

	// ~ informacija korisniku
	printf("Unijeli ste cijeli broj: %d", broj);


	printf("\n"); // prazna linija

	// informacija korisniku
	printf("\n<~-~-~-~ p o c e t a k ~-~-~-~>\n");

	// ~ obrada
	// pokusajmo da "izvrtimo"/prodjemo kroz sve cifre datog broja
	do {
		trenutnaCifra = broj % 10; // npr. za 123 % 10 = 3

		// test 1
		printf("trenutna cifra je: %d\n", trenutnaCifra);

		//proizvod = proizvod * trenutnaCifra;
		// ili koriscenjem slozenog operatora
		proizvod *= trenutnaCifra; // 1 * 3 = 3

		//broj = broj / 10;
		// ili koriscenjem slozenog operatora
		broj /= 10; // 123 / 10 = 12

		// test 2
		printf("trenutni broj je : %d\n", broj);

		// ljepsi ispis na konzolu
		if (broj != 0)
			printf("<~======= novi ciklus =======~>\n");
		else
			printf("<~-~-~-~ kraj programa ~-~-~-~>\n");
	} while (broj > 0);

	// ~ ispis na konzolu
	printf("\nProizvod cifara je: %d\n\n", proizvod);

	printf("PRIJATAN OSTATAK DANA!\n");
	printf("##### Dragan Cajic :-)\n");

	return 0;
}
