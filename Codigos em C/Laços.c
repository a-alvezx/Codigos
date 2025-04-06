#include <stdio.h>
#include <stdlib.h>


int main()
{
	/*VARIAVEIS*/
	int i, k, j;
	
	/*INICIO*/
	system ("cls");
	for ( k = 0 ; k <= 1 ; k++) {
		printf ("\n");
		for ( i = 1 ; i <= 5 ; i++) {
			printf (" TABUADA DO %2d |", i+k*5);
		}

		printf ("\n");
		for (i = 1 ; i <= 5 ; i++)
			printf ("_______________|");
		printf ("\n");
		for ( i = 1 ; i <= 10 ; i++) {
			for ( j = 1 ; j <= 5 ; j++)
				printf (" %2d x %2d = %2d  |", i, j+k*5, i*(j+k*5) );
			printf ("\n");
		}
		for (i = 1 ; i <= 5 ; i++)
			printf ("_______________|");
		printf ("\n");
	}

	system("pause");
	return 0;
}