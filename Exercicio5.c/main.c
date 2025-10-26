#include <stdio.h>

int main() {
	
    int numero = 0, armazena, i = 0;
    int array[100]; //vetor de 20 posições; NÃO ESQUECER: todo vetor começa com indice zero

	//entrada de dados
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

	//se a condição for verdadeira, faça
    if (numero == 0){
    	
    	printf("\n");
        printf("Numero invertido: %d", numero);
    } 
	else{  //se não
    	
    	armazena = numero; //a variavel armazena, recebe o numero para que ele não seja perdido
    	
	    //pegando cada digito e armazenando no vetor  de trás para frente
	    
	    while (armazena > 0) {      //enquanto a condição for verdadeira, faça
	    
	    	array[i] = armazena % 10; //pega o resto da divisão por 10, ou seja o ultimo digito
	        armazena /= 10;   //dividindo o numero novamente por 10
	        i++;
	    }

		printf("\n");
        printf("Numero invertido: ");
        
        for (int j=0; j<i; j++) {   //j<i pois i contem as posições preenchidas corretamente
        	 
            printf("%d", array[j]);  //imprimindo o vetor
        }
        
        printf("\n");
    }

    return 0;	
	
}