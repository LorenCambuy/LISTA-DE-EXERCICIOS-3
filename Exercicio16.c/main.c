#include <stdio.h>

int main() {
    int matriz[3][3];
    int somaReferencia = 0, soma;

    // preenchendo a matriz
    printf("Informe os valores da matriz: \n");
    for(int i=0; i<3; i++){
    	
        for(int j=0; j<3; j++){
        	
            printf("[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // soma da primeira linha como referência
    for(int j=0; j<3; j++){
    	
        somaReferencia += matriz[0][j];
    }

    // verificando todas as linhas
    for(int i=0; i<3; i++){
    	
        soma = 0;
        
        for(int j=0; j<3; j++){
        	
            soma = soma + matriz[i][j];
        }
        if(soma != somaReferencia){
        	
            printf("\nA matriz NAO e um quadrado magico.\n");
            return 0; // encerra o programa
        }
    }

    // verificando as colunas
    for(int j=0; j<3; j++){
    	
        soma = 0;
        
        for(int i=0; i<3; i++){
        	
            soma = soma + matriz[i][j];
        }
        if(soma != somaReferencia){
        	
            printf("\nA matriz NAO e um quadrado magico.\n");
            return 0; // encerra o programa
        }
    }

    // verificando as diagonais
    if((matriz[0][0] + matriz[1][1] + matriz[2][2] != somaReferencia) ||
       (matriz[0][2] + matriz[1][1] + matriz[2][0] != somaReferencia)){
       	
        printf("\nA matriz NAO e um quadrado magico.\n");
        return 0; // encerra o programa
    }

    // se passou por todas as verificações
    printf("\nA matriz e um quadrado magico!\n");

    return 0;
}
