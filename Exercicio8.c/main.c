#include <stdio.h>

int main(){
	
	int array[10]; //vetor que armazena 10 numeros
	int menor = 0, maior = 0;
	int indice_menor = 0, indice_maior = 0;
	
	printf("Informe 10 numeros \n");
	
	for(int i=0; i<10; i++){
		
		printf("Indice %d -> %d numero: ", i, i+1); 
		scanf("%d", &array[i]);
	}
	
	//inicializando a variavel com o primeiro numero do indice do array
	maior = array[0]; 
	menor = array[0];
	
	for(int j=0; j<10; j++){
		
		if(array[j] > maior){ //enquanto o vetor na posição J for maior
			
			maior = array[j];  //maior recebe esse numero
			indice_maior = j;  //e o j passa ser o maior indice
		}
		else if(array[j] < menor){ //enquanto o vetor na posição J for menor
			
			menor = array[j];  //menor recebe esse numero
			indice_menor = j;  //e o j passa ser o maior indice
		}
	}
	
	printf("\n");
	printf("O indice na posicao %d possui o maior valor, sendo : %d \n", indice_maior, maior);
	printf("O indice na posicao %d possui o menor valor, sendo : %d \n", indice_menor, menor);
	
	
	
	return 0;
}