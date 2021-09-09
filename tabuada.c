#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	system("chcp 65001");

	int n;

	printf("Informe um número: ");
	scanf("%d", &n);	

	for(int i = 1; i <= 10;i++) {

		int mult = (n* i);

		printf("%dx%d = %d\n", n, i, mult);

	}//fim for


}

/*

Escreva um programa que peça um inteiro ao usuário, e com esse inteiro, ele imprima, linha-a-linha, a tabuada daquele número até o 10.
Por exemplo, se ele escolher o número 2, o programa imprimirá: 2x1=2, 2x2=4, 2x3=6, ..., 2x10=20.

*/