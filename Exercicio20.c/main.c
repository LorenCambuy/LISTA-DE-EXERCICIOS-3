#include <stdio.h>

int main() {
    char vetorpalavra[100];
    int i, tamanho = 0, palindromo = 1;

    printf("Digite uma palavra: ");
    for(i = 0; i<100; i++) {
    	
        scanf("%c", &vetorpalavra[i]);

        if(vetorpalavra[i] == '\n'){      // fim da palavra
            
			vetorpalavra[i] = '\0'; //todo vetor string termina com \0
            break;
        }
    }

    // calcular tamanho da palavra
    for(tamanho = 0; vetorpalavra[tamanho] != '\0'; tamanho++);

    // verificar se é palíndromo
    for(i = 0; i<tamanho / 2; i++) {
    	
        if(vetorpalavra[i] != vetorpalavra[tamanho - 1 - i]) {
        	
            palindromo = 0; // não é palíndromo
            break;
        }
    }

	printf("\n");

    if(palindromo) {
    	printf("A palavra '%s' e um palindromo.\n", vetorpalavra); 
    } 
	else {
        printf("A palavra '%s' nao e um palindromo.\n", vetorpalavra);
    }

    return 0;
}
