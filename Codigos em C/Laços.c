#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int cont = 0;
    char ch;

    printf("Digite um bagulho aí: ");
    
    while ((ch = getche()) != '\r')  // '\r' é Enter
    {
        if (ch == '0')
        {
            printf(" -> Número 0 detectado!\n");
            cont++;
        }
    }

    printf("\nVocê digitou %d zeros\n", cont);
    return 0;
}

