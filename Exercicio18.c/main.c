#include <stdio.h>

int main() {
    char vetor_palavra1[50], vetor_palavra2[50];
    int i;

    // Preenchendo a primeira palavra
    printf("Digite a primeira palavra: ");
    
    for(i = 0; i < 50; i++){
    	
        scanf("%c", &vetor_palavra1[i]);
        
        if(vetor_palavra1[i] == '\n'){ 
        
         	vetor_palavra1[i] = '\0'; //toda variavel string precisa terminar com \0
            break;
        }
    }

    // Preenchendo a segunda palavra
    printf("Digite a segunda palavra: ");
    
    for(i = 0; i < 50; i++){
    	
        scanf("%c", &vetor_palavra2[i]);
        
        if(vetor_palavra2[i] == '\n'){ // Enter indica fim da palavra
        
        	vetor_palavra2[i] = '\0'; //toda variavel string precisa terminar com \0
            break;
        }
    }

    // Comparando letra por letra
    for(i = 0; vetor_palavra1[i] != '\0' || vetor_palavra2[i] != '\0'; i++){
    	
        if(vetor_palavra1[i] != vetor_palavra2[i]){
        	
            printf("As palavras sao diferentes!\n");
            return 0;
        }
    }

    printf("As palavras sao iguais!\n");

    return 0;
}
