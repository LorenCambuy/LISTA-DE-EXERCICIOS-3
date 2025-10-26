#include <stdio.h>

int main() {
	
	int matriz[4][4]; //matriz com 4 linhas e 4 colunas
	int i, k, maior_valor;
	
	printf("Sendo [linha][coluna] - Informe o valor da posicao: \n");

	for(i=0; i<4; i++){
		
		for(k=0; k<4; k++){
			  
			 printf("[%d][%d] : ", i+1, k+1);   //mesmo que seja a linha e coluna, por exemplo 1, o indice sera 0;
			 scanf("%d", &matriz[i][k]);
		}
	}
	
	//encontrar o maior valor de cada linha
	for(i=0; i<4; i++){
		
		maior_valor = matriz[i][0];   //definindo que o maior valor da linha i é o contido no primeiro indice para que faça uma comparação
		
		for(k=1; k<4; k++){
			
			if(matriz[i][k] > maior_valor){  //enquanto o valor da linha i e coluna k for maior que o valor definido anteriormente, entre na condição e define um novo valor
				
				maior_valor = matriz[i][k];
			}
		}
		
		printf("\n");
		printf("O maior valor da linha %d e: %d \n ", i+1, maior_valor);	
		
	}
	return 0;
}