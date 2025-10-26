#include <stdio.h>

int main() {
	
	int array[2]; //vetor para armazenar dois numeros
	int numeros[100]; //vetor para armazenar todos os numeros entre os informados
	int temporaria = 0, i, j, k, contador = 0;

	//preenchendo o vetor
	for(i=0; i<2; i++){
		
		printf("Informe o %d numero: ", i+1);
		scanf("%d", &array[i]);
	}
	
	//definindo que o vetor no indice 0 deve ser o menor numero
	if(array[0] > array [1]){

			temporaria = array[0];
			array[0] = array[1];
			array[1] = temporaria;	
	}
	
	//preechendo o vetor numero com os numeros entre os informados no primeiro vetor
	for(j=array[0] + 1; j<array[1]; j++){
		
		numeros[contador] = j;
		contador++;
	}
	
	printf("\n");
    printf("Numeros entre %d e %d em ordem crescente:\n", array[0], array[1]);
    
    for (k=0; k<contador; k++) {
    	
        printf("%d ", numeros[k]);
    }
	
	return 0;
}