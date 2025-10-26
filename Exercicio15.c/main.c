#include <stdio.h>

int main() {
    int matriz[5][5]; // matriz 5 linhas e 5 colunas 

    //preenchendo a matriz
    for(int i=0; i<5; i++){
    	
        for(int j=0; j<5; j++){
        	
            matriz[i][j] = 0;
        }
    }

    //colocando 1 na linha linha 2 e coluna coluna 2
    for(int m=0; m< 5; m++){
    	
        matriz[2][m] = 1; // linha central 
        matriz[m][2] = 1; // coluna central
    }


    printf("Matriz Cruz: ");
    printf("\n");
    
    
    for(int a= 0; a<5; a++){ //exibindo a matriz
    
        for(int b= 0; b< 5; b++){
        	
            printf("%d ", matriz[a][b]);
        }
        
        printf("\n");
    }

    return 0;
}
