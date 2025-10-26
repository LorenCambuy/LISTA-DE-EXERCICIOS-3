#include <stdio.h>

int main() {
	
	int array[8];
	int ordem_decrescente, temporaria = 0;
	
	printf("Informe oito valores: \n");
	for(int i=0; i<8; i++){  //preenchendo o vetor
		
		printf("%d numero: ", i+1);
		scanf("%d", &array[i]);
		
	}
	
	//identificando qual sera a ordem crescente
	for(int j=0; j<8; j++){
		
		for(int k=j+1; k<8; k++){ //k=i+1 pois precisa comparar o elemento atual com todos os elementos do array
			
			if(array[j] < array[k]){
				  
				temporaria = array[j];  // guarda o valor atual em uma variavel temporaria
				array[j] = array[k];	 // coloca o valor maior na posição j
				array[k] = temporaria;   // coloca o valor que estava em k na temporaria
			}		
		}
	}
	
	//exibindo o vetor
	printf("\n");
	printf("\nNumeros em ordem decrescente: ");
	
	for(int i = 0; i < 8; i++) {
		
	    printf("%d ", array[i]);
	}
	
	return 0;
}