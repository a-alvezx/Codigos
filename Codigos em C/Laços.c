#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int cont = 0;
    char ch;

    printf("Digite um bagulho a�: ");
    
    while ((ch = getche()) != '\r')  // '\r' � Enter
    {
        if (ch == '0')
        {
            printf(" -> N�mero 0 detectado!\n");
            cont++;
        }
    }

    printf("\nVoc� digitou %d zeros\n", cont);
    return 0;
}

