#include <stdio.h>

int main() {
    int numero; //número informado pelo usuário
    int numeros[100];  //vetor para armazenar os dígitos
    int i, tamanho = 0, temporaria;

    printf("Informe o numero inteiro positivo: ");
    scanf("%d", &numero);

    // se o numero informado for zero, armazena direto no vetor que ele e tam 1
    if (numero == 0) {
    	
        numeros[0] = 0;
        tamanho = 1;
    }
    else if (numero > 0) {
    	
        temporaria = numero;  //utilizando a variavel temporaria para não perder o numero informado
 
        // conta quantos digitos tem o numero
        while (temporaria > 0) {     //enquanto a condição for verdadeira, executa o codigo
        	
            temporaria /= 10;
            tamanho++;
        }

        // preencheendo  o vetor com os digitos na ordem correta
        for (i = tamanho - 1; i>= 0; i--) {
        	
            numeros[i] = temporaria % 10; // pega o último dígito
            temporaria /= 10;             // remove o último dígito
        }
    }
    else {
        tamanho = 0; // caso negativo nao vai preencher
    }

	printf("\n");
    printf("O numero %d tem %d digito(s)", numero, tamanho);

    return 0;
}