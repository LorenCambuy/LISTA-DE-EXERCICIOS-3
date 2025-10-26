#include <stdio.h>

int main() {
	
	int array[10]; //vetor com 10 posições
	int i, j, repetido = 0;
	
	printf("Informe 10 numeros inteiros: ");
	printf("\n");
	
	for(i=0; i<10; i++){  //preenchendo o vetor de i = 0 até i = 9
		
		printf("%d numero: ", i+1);  
		scanf("%d", &array[i]); 
	}
	
	printf("\n");
	printf("Numeros que nao se repetem: ");
	
	//verificando cada numero
	for(i=0; i<10; i++){

		repetido = 0; //zera a variavel para cada novo numero

		//realizar comparacao
		for(j=0; j<10; j++){
			
			if(i!= j && array[i] == array[j]){   //i e j são diferentes E o valor armazenado no vetor na posição i precisa ser igual a j
				
				repetido = 1; //numero repetido
				break; //sai do loop
			}
		}	
		
		//exibindo os numeros 
		if(repetido == 0){
			
			printf("%d ", array[i]);
		}
	}

	return 0;
}