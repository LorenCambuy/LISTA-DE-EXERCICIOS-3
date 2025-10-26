#include <stdio.h>
#include <stdlib.h> //biblioteca para a função srand e rand
#include <time.h> //biblioteca da função time

int main() {
    int array_aleatorio[50], array_unico[50]; //vetores
    int i, j, tamanhoUnico = 0;
    int repetido;

    // Inicializa gerador de numeros aleatorios
    srand(time(NULL));

    // Preenche vetor com numeros aleatorios
    for(i=0; i<50; i++){
    	
        array_aleatorio[i] = rand() % 50;
    }

    // Exibe vetor original
    printf("Vetor: ");
    for(i=0; i<50; i++){
    	
        printf("%d ", array_aleatorio[i]);
        
    }

		printf("\n");
    // Criando vetor de números únicos
    for(i=0; i<50; i++){
    	
        repetido = 0;

        // Verifica se o numero ja esta no vetor de unicos
        for(j=0; j<tamanhoUnico; j++){
        	
            if(array_aleatorio[i] == array_unico[j]){
            	
                repetido = 1;
                break;
            }
        }

        // Se nao repete, adiciona ao vetor de numeros unicos
        if(repetido == 0){
        	
            array_unico[tamanhoUnico] = array_aleatorio[i];
            tamanhoUnico++;
        }
    }

    // Exibindo vetor unico
    printf("\n");
    printf("Vetor com numeros unicos: ");
    
    for(i=0; i<tamanhoUnico; i++){
    	
        printf("%d ", array_unico[i]);
    }

    printf("\n");

    return 0;
}
