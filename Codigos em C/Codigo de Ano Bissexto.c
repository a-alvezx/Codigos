#include<stdlib.h>
#include<stdio.h>


int main() 
{
	/*Definindo Variaveis*/
	int ano;
	
	/*INICIO*/
	printf ("Digite o ano: ");
	scanf ("%d", &ano);
	printf ("%s \n", ( ano % 4 == 0 ) || (ano % 400 == 0) && !(ano % 100 == 0)? "E ano bissexto" : "Nao e ano Bissexto");
	system ("PAUSE");
	return 0;


}


