#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int base, expoente, i, resultado, valor=0;


    printf ("Bem-vindo ao programa de potencia\n");
    printf ("Digite a base: ");
    scanf ("%d", &base);
    if (base < 0)
    {
        base = base * -1;
    }
    printf ("Digite o expoente: ");
    scanf ("%d", &expoente);
    if ( expoente < 0){
        expoente = expoente * -1;
        valor = 1;
    }
    for ( i = 0; i < expoente; i++)
    {
        resultado = base;
        resultado = base * resultado;
    }
    if ( valor == 1){
        printf ("O resultado de %d elevado a %d e: 1 / %d\n", base, expoente, resultado);
    }else{
        printf ("O resultado de %d elevado a %d e: %d\n", base, expoente, resultado);
    }
    
    return 0;
}