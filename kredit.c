// kredit.c by Драган Ћајић <http://learn-pisio.eu5.org/>
// Program izracunava ukupnu sumu novca i kamate koju ce korisnik kredita otplatiti
// ako dize kredit u iznosu koji se zadaje i uz kamatnu stopu koja se takodje zadaje.
// Program napisati u interaktivnom obliku. <-- POSTIZANJE INTERAKTIVNOSTI!!!
#include <stdio.h>

/**
 * @author: Драган Ћајић
 * @datetime: 3:40 PM March 15, 2021
 * @subject: Програмирање на језику C!
 * @description: Program racuna kamatu i total kredita.
 */

int main(void) {
	// deklaracija i inicijalizacija varijabli
	float
		iznos, // iznos kredita
		kamata, // kamata u procentima
		decimalno_kamata, // KAMATA DECIMALNO
		iznos_kamate, // IZNOS KAMATE
		total; // UKUPAN IZNOS PLACANJA

	// Budite ljubazni! :-)
	// Be polite and nice!!
	printf("DOBAR DAN! KAKO STE?\n");

	printf("\n"); // prazna linija

	// unos podataka
	printf("zeljeni iznos kredita? ");
	scanf("%f", &iznos);
	printf("kamata u procentima?   ");
	scanf("%f", &kamata);

	printf("\n"); // prazna linija

	// test*
	printf("~ U n i j e l i  s t e  podatke:\n");
	printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
	printf("iznos kredita: %19.2f KM\n", iznos);
	printf("kamata u procentima: %13.2f %% \n", kamata);

	// obrada
	decimalno_kamata = kamata / 100.0;
	iznos_kamate = iznos * decimalno_kamata;
	total = iznos + iznos_kamate;

	// test**
	printf("kamata decimalno: %16.2f\n", decimalno_kamata);

	// ljepsi ispis na konzolu
	printf("=====================================\n");

	// ispis na konzolu
	printf("iznos kamate: %20.2f KM\n", iznos_kamate);
	printf("puni iznos za otplatu: %11.2f KM\n", total);

	printf("\nHVALA NA UKAZANOM POVJERENJU!\n");

	return 0;
}
