#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int pecas = 0, opcao;
    float total = 0.0;
    do
    {
        system ("cls");
        printf ("======================\n");
        printf ("  Joelhos Joalheria\n");
        printf ("======================\n\n");
        printf ("Ola, seja bem-vindo a nossa loja!\n\n");
        printf ("Escolha uma das opcoes abaixo:\n\n");
        printf (" 1 - Colar de Diamante (R$ 500,00)\n");
        printf (" 2 - Brinco de Ouro (R$ 300,00)\n");  
        printf (" 3 - Pulseira de Prata (R$ 200,00)\n");
        printf (" 4 - Sair...\n");
        printf ("Carinho: %d itens. Total: R$ %.2f\n", pecas, total);
        if ( pecas > 5){
            printf ("Voce ganhou 5%% de desconto!\n");
        }
        printf ("======================\n");
        opcao = getch() - '0';
        switch (opcao)
        {
        case 1:
            total = 500 + total;
            pecas ++;
            break;
        
        case 2:
            total = 300 + total;
            pecas ++;
            break; 
        case 3:
            total = 200 + total;
            pecas ++;
            break; 
        case 4:
            printf ("Saindo...\n\n");
            break;
        default:
            printf ("Opcao invalida! Tente novamente.\n");
            system ("pause");
            break;
        }

    } while (opcao != 4);
    
    if (pecas == 0){
        printf ("Nenhum produto foi adicionado ao carrinho.\n");
    } else {
        if (pecas > 5)
        {
            total = total * 0.95;
        } 
    }
    if (pecas != 0){
        printf ("Voce comprou %d produtos.\n", pecas);
        printf ("Total: R$ %.2f\n", total); 
    }
    
    printf ("Obrigado por visitar nossa loja!\n\n");
    system ("pause");
    return 0;
}
