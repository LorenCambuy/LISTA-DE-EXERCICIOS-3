#include <stdio.h>

int main() {
	
	int matriz[3][3]; //linhas e colunas
	int linha1 = 0, linha2 = 0, linha3 = 0;
	int maiorSoma = 0, linhaMaior = 0;
	
	printf("Preencha os valores das linhas e colunas da matriz: \n");
	for(int i=0; i<3; i++){
		
		for(int j=0; j<3; j++){
			
			printf("[%d][%d]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}	
	}
	
	//somando os valores de cada linha 
	for(int m=0; m<3; m++){
			
		linha1 = linha1 + matriz[0][m]; //linha 1
		linha2 = linha2 + matriz[1][m]; //linha 2
		linha3 = linha3 + matriz[2][m]; //linha 3
		
	}
		
	// verificando qual linha tem a maior soma
	if(linha1 >= linha2 && linha1 >= linha3){
		
		maiorSoma = linha1;
		linhaMaior = 1;  //linha 1
	}
	else if(linha2 >= linha1 && linha2 >= linha3){
		
		maiorSoma = linha2;
		linhaMaior = 2; //linha 2
	}
	else{
		maiorSoma = linha3;
		linhaMaior = 3; //linha 3
	}
	
	printf("\n");
	printf("A linha com a maior soma e %d \n", linhaMaior);
	printf("Soma: %d", maiorSoma);

	return 0;
}