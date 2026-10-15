/*
1. Scrieti un program C care afiseaza radacina patrata a numarului introdus de la tastatura.
2. Scrieti un program C care afiseaza patratul numarului introdus de la tastatura.
3. Scrieti un program care sa ceara utilizatorului sa tasteze un numar reprezentand dolari si afiseaza valoarea in lei (mizati pe o rata de schimb de 3,68 lei).
4. Scrieti un program care calculeaza patratul sumei si patratul diferentei a trei numere intregi introduse de la tastatura.
5. Scrieti un program care citeste de la tastatura trei numere si verifica daca cele trei numere formeaza un triunghi. In caz afirmativ verifica ce fel de triunghi
formeaza, altfel afiseaza un mesaj de eroare.
6. Sa se scrie un program C care afiseaza tripletele de numere pitagoreice (i, j, k), 1 < i < j < k <= N cu N introdus de la tastatura.
Observatie: Numerele pitagoreice satisfac relatia : k2= i2 + j2.
7. Sa se scrie un program C care afiseaza toate numerele mai mici decat un numar dat N. N se citeste de la tastatura.
8. Scrieti un program care citeste de la tastatura un an calendaristic si verifica daca este bisect sau nu. Un an este bisect daca este divizibil cu 4 si nu este
divizibil cu 100, sau este divizibil cu 400.
9. Scrieti un program care citeste de la tastatura doi ani calendaristici si calculeaza diferenta dintre cei doi ani in numar de ani, luni si zile.
10. Un autovehicul se deplaseaza cu o viteza medie de 70 Km/h. Calculati timpul in ore necesar autovehicului pentru parcurgerea distantei d, citita de la tastatura.
*/

#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include <math.h>

void problema_1()
{
	double numar;

	printf("Dati un numar: ");
	scanf("%lf", &numar);

	numar = sqrt(numar);

	printf("Radacina patrata este: %lf.", numar);

	return;
}

void problema_2()
{
	double numar;

	printf("Dati un numar: ");
	scanf("%lf", &numar);

	numar *= numar;

	printf("Patratul numarului este: %lf.", numar);

	return;
}

void problema_3()
{
	double numar;
	double curs = 4.754;

	printf("Dati o valoare in dolari: ");
	scanf("%lf", &numar);

	numar *= curs;

	printf("Valoarea in lei este: %lf.", numar);

	return;
}

void problema_4()
{
	int numar1, numar2, numar3, suma, diferenta;

	printf("Dati 3 numere: ");
	scanf("%d %d %d", &numar1, &numar2, &numar3);

	suma = numar1 + numar2 + numar3;
	suma *= suma;

	diferenta = numar1 - numar2 - numar3;
	diferenta *= diferenta;

	printf("Patratul sumei este: %d.\nPatratul diferentei este: %d.", suma, diferenta);

	return;
}

void problema_5()
{
	double n1, n2, n3;

	printf("Dati lungimea celor 3 muchii: ");
	scanf("%lf %lf %lf", &n1, &n2, &n3);

	//  cond triunghi
	//	((n1 < n2 + n3) && (n2 < n1 + n3) && (n3 < n1 + n2))

	//  cond drept is
	//	(((n1*n1 == n2*n2 + n3 * n3) || (n2*n2 == n1*n1 + n3 * n3) || (n3*n3 == n1*n1 + n2 * n2) ) && ((n1 == n2) || (n2 = n3) || (n3 = n1) ))

	//  cond drept
	//	((n1*n1 == n2*n2 + n3 * n3) || (n2*n2 == n1*n1 + n3 * n3) || (n3*n3 == n1*n1 + n2 * n2) )

	//  cond echi
	//	((n1 == n2) && (n2 == n3) && (n3 == n1) ))

	//  cond is
	//	((n1 == n2) || (n2 == n3) || (n3 == n1) ))

	//    ( (tr) ? ( (dris) ? "Este triunghi dreptunghic isoscel." : ( (drept) ? "Este triunghi dreptunghic" : ( (echi) ? "Este triunghi echilateral." : ( (is) ? "Este triunghi isoscel." : "Este triunghi.") ) ) ) : "Nu este triunghi." ) ;

	printf(((n1 < n2 + n3) && (n2 < n1 + n3) && (n3 < n1 + n2)) ? ((((n1*n1 == n2 * n2 + n3 * n3) || (n2*n2 == n1 * n1 + n3 * n3) || (n3*n3 == n1 * n1 + n2 * n2)) && ((n1 == n2) || (n2 == n3) || (n3 == n1))) ? "Este triunghi dreptunghic isoscel." : (((n1*n1 == n2 * n2 + n3 * n3) || (n2*n2 == n1 * n1 + n3 * n3) || (n3*n3 == n1 * n1 + n2 * n2)) ? "Este triunghi dreptunghic" : (((n1 == n2) && (n2 == n3) && (n3 == n1))) ? "Este triunghi echilateral." : (((n1 == n2) || (n2 == n3) || (n3 == n1))) ? "Este triunghi isoscel." : "Este triunghi.")) : "Nu este triunghi.");

	return;
}

void problema_8()
{
	int an;

	printf("Dati un an: ");
	scanf("%d", &an);

	printf((an % 4) ? "Nu este an bisect" : ((an % 100) ? "Este an bisect" : ((an % 400) ? "Nu este an bisect." : "Este an bisect.")));
}

void problema_9()
{
	int an1, an2, dif_ani, dif_luni = 12, dif_zile = 365;

	printf("Dati 2 ani: ");
	scanf("%d %d", &an1, &an2);

	dif_ani = an2 - an1 + 1;
	dif_luni *= dif_ani;
	dif_zile *= dif_ani;

	printf("Numarul de ani este: %d. Numarul de luni este: %d. Numarul de zile este: %d.", dif_ani, dif_luni, dif_zile);
}

void problema_10()
{
	float distanta, viteza = 70, ore;

	printf("Dati o distanta:");
	scanf("%f", &distanta);

	ore = distanta / viteza;

	printf("Durata este %f ore", ore);
}

int main()
{
	int problema;
	printf("Dati numarul problemei:");
	scanf("%d", &problema);

	do {
		switch (problema)
		{
		case 1: problema_1(); break;
		case 2: problema_2(); break;
		case 3: problema_3(); break;
		case 4: problema_4(); break;
		case 5: problema_5(); break;
		case 8: problema_8(); break;
		case 9: problema_9(); break;
		case 10: problema_10(); break;
		default: printf("Nu exista problema numarul:%d", problema); break;
		}

		printf("\n\nDati numarul problemei:");
		scanf("%d", &problema);

	} while (problema);
}
