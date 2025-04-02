#include<stdlib.h>
#include<stdio.h>

int main()
{
    /*VATIAVEIS*/
    int dias, orc, tot;
    /*INCIO*/
    Printf ("============================ \n");
    printf ("    SUPER MARIO BROS inc    \n ");
    Printf ("============================ \n");
    printf ("Orcamento de consulta: \n ");
    printf ("Digite os dias trabalhados: ");
    scanf ("%d", &dias);
    printf ("A taxa do servico e de R$ 20.00 \n");
    printf ("Calculando...");
    orc = dias * 20;
    tot = orc - (orc / 100); 
    printf ("Valor Total: %d \n", orc);
    printf ("Valor Liquido (Desconto de 8%% do imposto de renda): %2d \n", tot);
    system ("PAUSE");
    return 0;
    




}
