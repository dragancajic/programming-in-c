// aritmetika.c by Драган Ћајић <http://learn-pisio.eu5.org/>
// A -- Cjelobrojna aritmetika s konstantama
// B -- Aritmetika s cjelobrojnom vrijednoscu promjenljivih
#include <stdio.h>

/**
 * @author: Драган Ћајић
 * @datetime: 12:21 AM March 6, 2021
 * @subject: Програмирање на језику C!
 */

int main(void) {
	// konstante
	const int A1 = 17; // const is a type qualifier
	const int B1 = 8;
	const char BLANK_CHARACTER = ' ';

	// promjenljive
	int a = 0;
	int b = 0;

	// K O N S T A N T E
	// A1 -- ispis u jednom redu
	printf("%d", (A1+B1));
	// %c -- format specifier for a single character
	printf("%c", BLANK_CHARACTER);
	printf("%d", A1-B1);
	printf("%c", BLANK_CHARACTER);
	printf("%d", A1*B1);
	printf("%c", BLANK_CHARACTER);
	printf("%d", A1/B1);
	printf("%c", BLANK_CHARACTER);
	printf("%d", A1%B1);

	printf("\n"); // prelazak u sljedeci red
	printf("\n");

	// A2 -- ispis na zasebnoj liniji
	printf("%d\n", (A1+B1));
	printf("%d\n", A1-B1);
	printf("%d\n", A1*B1);
	printf("%d\n", A1/B1);
	printf("%d\n", A1%B1);

	printf("\n"); // prelazak u sljedeci red
	printf("\n");

	// ispis na konzolu
	printf("Dobar dan! Kako ste?\n");

	return 0;
}
