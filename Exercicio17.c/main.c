#include <stdio.h>

int main() {
	
	int numero = 0;
	
	printf("Informe um numero: ");
	scanf("%d", &numero);
	
	//Laço condicional SE, SENÃO
	if(numero > 0){
		printf("\n Numero e POSITIVO");
	}
	else if(numero < 0){
		printf("\n Numero e NEGATIVO");
	}
	else{
		printf("\n Numero e ZERO");
	}
	
	return 0;
}