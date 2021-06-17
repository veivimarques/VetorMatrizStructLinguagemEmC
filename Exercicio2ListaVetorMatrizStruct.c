//Exercicio4ListaVetorMatrizStruct

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct Dieta {
    char nomeComida [200];
    float peso;
    float calorias;

} dieta; 

void incluir(); 
void apresentar();

int main (){
    setlocale (LC_ALL,"portuguese");
    char opcao;
    	
    do {
        printf (" \n O que deseja fazer? "); 
        printf (" \n 1. Incluir" );
        printf (" \n 2. Excluir" );
        printf (" \n \n Digite a opcao desejada: ");
        scanf ("%s%*c", &opcao);

        switch(opcao) {
            case 1:
                incluir();
                break;
            case 2:
                apresentar();
                break;
            default:
                printf(" \n Opcao invalida. Vamos tentar de novo? \n");
                break;
        }
		      
    } while(opcao!= 5);
}

void incluir(){

	    do {
	    	
		printf("Informe o nome:", i+1);
		fflush(stdin);
		fgets(comida[i].nomeComida, 30, stdin);
		puts("Informe o peso: ");
		fflush(stdin);
		scanf("%i", &comida[i].peso);
		puts("Calorias: ");
		fflush(stdin);
		scanf("%i", &comida[i].numCalorias);
		printf("\n Tecle 's' se deseja inserir mais algum dado\n \n");
	    continua = getch(); 
	    }while (continua == 's');				
}	      

void apresentar(){
	
		printf(" \n ------- Dados inseridos com sucesso! ------- \n"); 
		printf("Nome: %s\n", comida[i].nomeComida);
		printf("Peso:\n", comida[i].peso);
		printf("Quantidade.", comida[i].numCalorias);		
}		   

