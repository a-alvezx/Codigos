#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
		
	int cont=0;
	char ch;
	
	printf ("Digite um bagulho ai");
	while ((ch = getche()) != '\r')
		if (ch=='0'){
			printf ("Numero 0 detectado!");
			cont++;
		}
		
	
	prinf ("Vc digitou %d zeros", cont);
	return 0;
}	
