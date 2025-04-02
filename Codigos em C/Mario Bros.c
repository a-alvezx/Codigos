#include<stdlib.h>
#include<stdio.h>

int main()
{
    /*VARIAVEIS*/
    int dias, orc;
    float tot;
    /*INCIO*/
    printf ("============================ \n");
    printf ("    SUPER MARIO BROS inc    \n ");
    printf ("============================ \n");
    printf ("Orcamento de consulta: \n ");
    printf ("Digite os dias trabalhados: ");
    scanf ("%d", &dias);
    printf ("A taxa do servico e de R$ 20.00 \n");
    printf ("Calculando... \n");
    system ("pause");
    orc = dias * 20;
    tot = orc * 0.92; 
    printf ("Valor Total: R$ %2d \n", orc);
    printf ("Valor Liquido (Desconto de 8%% do imposto de renda): R$ %.2f \n", tot);
    system ("PAUSE");
    return 0;

}