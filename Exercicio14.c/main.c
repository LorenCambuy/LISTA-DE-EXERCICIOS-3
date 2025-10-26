#include <stdio.h>

int main() {
	
	int matriz[4][4]; //linhas e colunas
	int soma = 0;
	
	printf("Preencha os valores das linhas e colunas da matriz: \n");
	for(int i=0; i<4; i++){
		
		for(int j=0; j<4; j++){
			
			printf("[%d][%d]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}	
	}
	
	// somando os valores da diagonal principal 
	// o indice da linha é igual ao indice da coluna
	
	printf("\n");
	printf("Os valores da diagonal principal sao: ");
	
	for(int i=0; i<4; i++){
		
		soma += matriz[i][i]; //linha = coluna
		printf("%d ", matriz[i][i]); // mostrando cada elemento da diagonal
	}
	
	printf("\nA soma e: %d\n", soma);

	return 0;
}
