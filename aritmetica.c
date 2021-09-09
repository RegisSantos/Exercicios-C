#include <stdio.h>
#include <stdlib.h>

	int main() {

		int n1;
		int n2;

		printf("Informe o 1º número: ");
		scanf("%d", &n1);
		printf("Informe o 2º número: ");
		scanf("%d", &n2);

		int soma = n1 + n2;
		int sub = n1 - n2;
		int mult = n1 * n2;

		printf("A soma entre %d e %d é: %d\n", n1, n2, soma);
		printf("A subtração entre %d e %d é: %d\n", n1, n2, sub);
		printf("A multiplicação entre %d e %d é: %d\n", n1, n2, mult);
		printf("A divisão entre %d e %d é: %d\n", n1, n2, div);
		
	}