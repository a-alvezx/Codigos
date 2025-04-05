#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i, n, n1, lit, j;
	printf ("Tabuada Inteligente \n");
	printf ("Digite o inicio: ");
	scanf ("%d", &n1);
	if (n1 == 0) {
		while ( n1 == 0) {
			printf ("Numero invalido\n");
			printf ("Digite um numero: ");
			scanf ("%d", &n1);
		}
	}
	printf ("Digite o limite: ");
	scanf ("%d", &n);
	
	printf ("Digite a tabuada: ");
	scanf ("%d", &lit);
	printf ("\n");
	printf ("Tabudada do %d ate %d. \n", n1, n );
	printf ("FATOR %d \n ", lit);
	printf ("_________________\n");
	for ( j = n1 ; j <= n ; j++) {
		for ( i = 1; i <= lit ; i++) {
		printf ("%3d x %3d = %3d  | \n", i, j, j * i);
		}	
	printf ("_________________|");
	printf ("\n");
	}
	
	

	return 0;
}
