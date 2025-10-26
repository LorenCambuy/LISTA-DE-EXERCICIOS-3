#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	
	char array[50]; //vetor
	int i = 0, vogais = 0, consoantes = 0;

	printf("Digite uma palavra: ");
	
	for(i=0; i<50; i++){
		
		scanf("%c", &array[i]);  //le e armazena no vetor; %c - caracteres
		
		if (array[i] == '\n') {  // se caso apertar enter, vai parar 
			break;
		}
	}
	
	array[i] = '\0';  //toda string deve finalizar com o \0 para marcar o final
	
	//verificando vogais e consoantes 
	for (int j=0; j< strlen(array); j++){
		
		char letra = array[j]; //variavel letra recebe o array na posição do contador
		
		if( letra == 'a' || letra == 'A' || 
		   letra  == 'e' || letra == 'E' ||
		   letra  == 'i' || letra == 'I' ||
		   letra  == 'o' || letra == 'U' ||
		   letra  == 'u' || letra == 'O' ) {
		   
		    vogais++; //vogais = vogais +
		   }
		   
		else{
			consoantes++;
		}
	
	}
	
	printf("\n");
 	printf("Quantidade de vogais: %d\n", vogais);
	printf("Quantidade de consoantes: %d\n", consoantes);
	
	return 0;
}