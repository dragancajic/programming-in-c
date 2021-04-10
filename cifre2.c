// cifre2.c by Драган Ћајић <http://learn-pisio.eu5.org/>
// Program broji parne i neparne cifre cijelog broja veceg od 9 koriscenjem
// do-while petlje, while petlje i for petlje. <-- CIKLICKA STRUKTURA PROGRAMA
// Program napisati u interaktivnom obliku.    <-- POSTIZANJE INTERAKTIVNOSTI!
#include <stdio.h>

/**
 * @author: Драган Ћајић
 * @datetime: 3:46 PM April 2, 2021
 * @modified: 12:09 AM April 11, 2021
 * @subject: Програмирање на језику C!
 * @description: Program broji parne i neparne cifre broja > 9.
 */

int main(void) {
	// deklaracija i inicijalizacija varijabli
	int broj = 0;
	int brojParnihCifara = 0;
	int brojNeparnihCifara = 0;
	int trenutnaCifra = 0;

	// Budite ljubazni! :-)
	// Be polite and nice!!
	printf("DOBAR DAN! KAKO STE?\n");

	printf("\n"); // prazna linija

	// ~ unos podataka
	/*
	printf("Unesite broj veci od 9 : ");
	scanf("%d", &broj);

	while (broj <= 9) { // provjera unosa
		printf("GRESKA! CIJELI broj > 9: ");
		scanf("%d", &broj);
	}
	*/

	while (1) {
		printf("Unesite broj veci od 9 : ");
		scanf("%d", &broj);

		if (broj <= 9) {
			printf("Pogresan broj unesen!\n\n");
			continue;
		}
		break;
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

		if (trenutnaCifra % 2 == 0) {
			printf("PARNA CIFRA NADJENA!\n");
			//brojParnihCifara = brojParnihCifara + 1;
			// ili koriscenjem slozenog operatora
			brojParnihCifara++; // 2 -> paran broj
		} else {
			printf("NEPARNA CIFRA JE TO!\n");
			//brojNeparnihCifara = brojNeparnihCifara + 1;
			// ili koriscenjem slozenog operatora
			brojNeparnihCifara++;
			// 3 -> neparan broj
			// 1 -> neparan broj
		}

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
	printf("\n"); // prazna linija

	printf("Broj parnih cifara je:    %d\n", brojParnihCifara);
	printf("Broj NEparnih cifara :    %d\n", brojNeparnihCifara);
	printf("Ukupan broj cifara broja: %d\n", brojParnihCifara + brojNeparnihCifara);

	printf("\n"); // prazna linija

	printf("PRIJATAN OSTATAK DANA!\n");
	printf("##### Dragan Cajic :-)\n");

	return 0;
}
