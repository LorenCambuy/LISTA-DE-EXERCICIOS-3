#include <stdio.h>
#include <string.h> 

int main() {
    char palavra[100]; // vetor para armazenar a palavra
    int i, contador = 0;

    printf("Digite uma palavra: ");

    for(i = 0; i < 100; i++) {
    	
        scanf("%c", &palavra[i]); 

        if(palavra[i] == '\n') {  // parar ao apertar Enter
            palavra[i] = '\0';    // finaliza a string
            break;
        }
    }

    // percorre cada caractere da palavra
    for(i = 0; palavra[i] != '\0'; i++) {
    	
        if(palavra[i] == 'a' || palavra[i] == 'A') { 
            contador++;
        }
    }

	printf("\n");
    printf("A letra 'A' aparece %d vez(es) na palavra.\n", contador);

    return 0;
}
