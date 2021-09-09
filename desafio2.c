#include <stdio.h>
#include <stdlib.h>

	int main() {

		int n1;
		int n2;

		printf("Informe o 1º número: ");
		scanf("%d", &n1);
		printf("Informe o 2º número: ");
		scanf("%d", &n2);

		int mult = n1 * n2;
		printf("A multiplicação de %d por %d é: %d\n", n1, n2, mult);
		
	}

////Caso der erro de acentuação, usar o comando CHCP 650001 após compilar e antes de executar;
	//gcc desafio1.c
	//gcc desafio1.c -o desafio.exe
	//CHCP 65001
	//desafio.exe
//A biblioteca '#include <locale.h>' não está corrigindo erros de acentuação no meu terminal;