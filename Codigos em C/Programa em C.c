#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main ()
{
    int totc = 0, totp = 0;
    char palavra;
    

    printf ("Digite sua frase: \n");
    while ((palavra = getche()) != '\r'){
        if (palavra != ' ') 
        {
            totc++;
        }
        
        if (palavra == ' '){
            totp++;
        }
    }
    printf ("\nTotal de letras: %d\n", totc);
    printf ("Total de palavras: %d\n", totp);
    return 0;
}