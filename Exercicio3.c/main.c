#include <stdio.h>
#include <stdlib.h>  //biblioteca para usar função rand() e srand()
#include <time.h>    //biblioteca para usar função time()

int main() {
	
	int quant_numeros = 0, somaPares = 0, somaImpares = 0, escolha = 0, numeros =0;
	int vetor[100];
	
	printf("Informe uma quantidade de numeros: ");
	scanf("%d", &quant_numeros);
	
	printf("\n");
	
	printf("Digite (1) se deseja informar os numeros \n");
	printf("Digite (2) se deseja que sejam gerados aleatoriamente \n");
	printf("Opcao: ");
	scanf("%d", &escolha);
	
	if(escolha ==1){
		
		printf("\n");
		
		for(int i=0; i<quant_numeros; i++){
			
			printf("Informe o %d numero: ", i+1);
			scanf("%d", &vetor[i]);
		}
		
		printf("\n");
		printf("Numeros Informados: ");

		for(int i=0; i<quant_numeros; i++){
			
			printf("%d ", vetor[i]);
		}
			
	}
	else if(escolha ==2){
		
		srand(time(NULL)); // inicializando gerador de numeros aleatorios

		for(int i=0; i<quant_numeros; i++){
			
	            vetor[i] = rand() % 100; // Gera números de 0 a 99
	        }
	        
	    printf("\n");
	    printf("Numeros Gerados: ");
	    

		for(int i=0; i<quant_numeros; i++){
			
			printf("%d ", vetor[i]);
		}   
	        
	}
	else{
		printf("\n Opcao invalida");
		return 0;
	}


	//verificando quais numeros são pares e somando
	for (int j=0; j<quant_numeros; j++){
		
		if(vetor[j] % 2 == 0){
			
			somaPares = somaPares + vetor[j];
			
		}
		else{
			somaImpares = somaImpares + vetor[j];
		}

	}
	
	//exibindo somas
	printf("\n");
	printf("Soma dos numeros pares: %d \n", somaPares);
	printf("Soma dos numeros impares: %d \n", somaImpares);
	
	return 0;
}