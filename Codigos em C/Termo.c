#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

int main(){
    //VARIAVEIS//
    int n, i, j;
    char nome[50][6] = {
        "cabra", "fluir", "brisa", "marco", "nuvem",
        "sonho", "rival", "grito", "fundo", "lugar",
        "plano", "vento", "festa", "doido", "banco",
        "vento", "praia", "amigo", "morte", "verao",
        "ruido", "tempo", "trigo", "cheio", "vazio",
        "fazer", "antes", "sabor", "corpo", "faixa",
        "beijo", "linha", "letra", "senda", "fruta",
        "sede", "nivel", "calor", "parte", "criar",
        "ponto", "torre", "texto", "visao", "bravo",
        "globo", "campo", "frota", "breve", "marca"
    };
    char resp[6];
    char loop;
	srand(time(NULL));
	do{	
    	int acerto = 0;
    	int tent = 1;
		n = rand() % 50;
		do{
        	scanf ("%s", resp);
        	while (getchar() != '\n' && !feof(stdin)); 
			if (strcmp(resp, nome[n]) == 0){
            	printf("Palavra correta!");
            	acerto = 1;
        	} else {
            	int flag = 0;
            	for ( i = 0 ; i < 5 ; i++){
                	if ( resp[i] == nome[n][i]){
                    	printf (" (%c) ", resp[i]);
                	} else { 
                    	for ( j = 0 ; j < 5 ; j++){
                        	if ( resp[i] == nome[n][j]){
                            	printf (" *%c* ", resp[i]);
                            	flag = 1;
                            	break;
                        	}
                    	}
                    	if ( flag == 0 ){
                        	printf ("  _  ");	
                    	}
               		}
            	}
        	printf ("\n");
		}   
        tent++;
    	}while ( acerto == 0 && tent <= 5);
		printf ("Quer continuar? [S/N]");
		loop = getche();
	}while ( loop == 'S' && loop == 's');
	
	return 0;
}
