// aritmetika.c by Драган Ћајић <http://learn-pisio.eu5.org/>
// A -- Cjelobrojna aritmetika s konstantama
// B -- Aritmetika s cjelobrojnom vrijednoscu promjenljivih
#include <stdio.h>

// The #define preprocessor directive
//#define BLANK_CHARACTER ' '

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

	// P R O M J E N LJ I V E
    printf(" >>> Unesite cjelobrojne vrijednosti za a i b\n");
    printf("{brojeve razdvojte pritiskom na SPACE ili ENTER}: ");
    scanf("%d", &a);
    scanf("%d", &b);

    // test
    //printf("%d\n", a);
    //printf("%d\n", b);

    printf("\n"); // prelazak u sljedeci red
	printf("\n");

	// B1 -- ispis u jednom redu
	if (b == 0)
		printf("Dijeljenje nulom nije dozvoljeno!");
	else {
		printf("%d", a+b);
		printf("%c", BLANK_CHARACTER);
		printf("%d", a-b);
		printf("%c", BLANK_CHARACTER);
		printf("%d", a*b);
		printf("%c", BLANK_CHARACTER);
		printf("%d", a/b);
		printf("%c", BLANK_CHARACTER);
		printf("%d", a%b);
	}

	printf("\n"); // prelazak u sljedeci red
	printf("\n");

	// B2 -- ispis na zasebnoj liniji
	printf("    zbir a + b = ");
	printf("%d\n", a + b);
	printf(" razlika a - b = ");
	printf("%d\n", a - b);
	printf("proizvod a * b = ");
	printf("%d\n", a * b);

	// provjera na dijeljenje nulom (b != 0, ne smije biti b == 0)
	if (b == 0)
		printf("Dijeljenje nulom nije dozvoljeno!\n");
	else {
		printf("kolicnik a : b je ");
		printf("%d\n", a / b);
		printf(" ostatak a : b je ");
		printf("%d\n", a % b);
	}

	// ispis na konzolu
	//printf("\nDobar dan! Kako ste?\n");

	return 0;
}
