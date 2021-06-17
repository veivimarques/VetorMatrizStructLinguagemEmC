//Exercicio1ListaVetorMatrizStruct

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct Registro{
	char nome[200];
	double precoProduto;
	int codigo, baixaEstoque;

}produto;

int main (){
	setlocale(LC_ALL, "Portuguese");
	prod vendaMensal[4][6], maiorBaixa;
	int i, j;


	for(i=0; i<4; i++){
		for(j=0; j<6; j++){
			printf("Codigo: \n");
			fflush(stdin);
			scanf("%d", &vendaMensal[i][j].codigo);
			printf("Nome: \n");
			fflush(stdin);
			fgets(vendaMensal[i][j].nome, 30, stdin);
			printf("Valor: R$ \n");
			fflush(stdin);
			scanf("%d", &vendaMensal[i][j].precoProduto);
			printf("Quantidade vendida: \n");
			fflush(stdin);
			scanf("%d", &vendaMensal[i][j].baixaEstoque);
		}
	}
	prodMaiorBaixa = vendaMensal[0][0];
	
	for(i=0; i<4; i++){
		for(j=0; j<6; j++){
			if (vendaMensal[i][j].baixaEstoque > maiorBaixa.baixaEstoque){
				maiorBaixa = vendaMensal[i][j];
				
			}	
		}
	}
	system("cls");

	printf("Nome do produto mais vendido: %s ", prodMaiorBaixa.nomeProd);
	printf("Quantidade vendida: %i unidades.\n", prodMaiorBaixa.baixaEstoque);

	
}
