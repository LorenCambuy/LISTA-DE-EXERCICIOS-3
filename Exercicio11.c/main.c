#include <stdio.h>

int main() {
	
	int array[10], contados[10];
	int i, j, k, num_repetido, contador;
	
	printf("Informe 10 numeros: \n");
	for(i=0; i<10; i++){ //preenchendo o vetor
		
		printf("%d numero: ", i+1);
		scanf("%d", &array[i]);
		
	}
	
	printf("\n");
	printf("--------------------------------");
	
	// inicializando o vetor contados com 0
	for(i=0; i<10; i++){
		
		contados[i] = 0;
	}
	
	for(j=0; j<10; j++){ 
		
		//verificando se o numero ja foi contado
		num_repetido = 0;
		
		for(k=0; k<j; k++){ // compara apenas com os anteriores
			if(array[j] == array[k]){
				num_repetido = 1;
				break; //sai do loop
			}
		}
		
		
		//contando o numero
		if(num_repetido == 0){
			contador = 0;
			
			//verificando quantas vezes ele aparece no array
			for(int m=0; m<10; m++){
				
				if(array[m] == array[j]){
					contador = contador + 1; //contador++;
				}
			}
			
			printf("\n");
			printf("O numero %d aparece %d vez(es)\n", array[j], contador);	

		}	
	}
		
	return 0;
}
