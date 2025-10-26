#include <stdio.h>

int main() {
	
	int vetorA[5], vetorB[5]; //vetores
	int soma = 0, multiplicador = 0; //variaveis para chegar ao resultado
	
	printf("Informe os 5 numeros do primeiro vetor: \n");
	for(int a=0; a<5; a++){   //preenchendo vetor a
	
		printf("%d numero: ", a+1);
		scanf("%d", &vetorA[a]);
	
	}
	
	printf("\n");
	
	printf("Informe os 5 numeros do segundo vetor: \n");
	for(int b=0; b<5; b++){ //preenchendo vetor b
	
		printf("%d numero: ", b+1);
		scanf("%d", &vetorB[b]);
	
	}
	
	printf("\n");
	
	//realizando o calculo
	for(int i=0; i<5; i++){  
			
		multiplicador = vetorA[i] * vetorB[i]; //multiplicando
		soma = soma + multiplicador;	//somando
		
		printf("( %d x %d ) = %d \n", vetorA[i], vetorB[i], multiplicador);	 //exibindo a multiplicação
	}
	
	printf("\n");
	printf("O produto escalar e: %d ", soma);
	
	
	return 0;
}