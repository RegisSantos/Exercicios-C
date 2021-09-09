#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

	system("chcp 65001");

	float n1;
	float n2;
	float n3;

	printf("Informe a 1ª nota: ");
	scanf("%f", &n1);
	printf("Informe a 2ª nota: ");
	scanf("%f", &n2);
	printf("Informe a 3ª nota: ");
	scanf("%f", &n3);

	float media = (n1 + n2 + n3) / 3.0;

	printf("Média: %.1f\n", media);

	if(media >= 6) {
		printf("Aluno APROVADO!");
	} else if(media >= 5 && media <6) {
		printf("Aluno EM RECUPERAÇÃO!");
	} else {
		printf("Aluno Reprovado!");
	}//fim else

}

/*

	int n = 10;
	double nr = 3.14;
	char letra = 'A';
	char str[] = "Programação";
	char *strx = "Programação";

	printf("Numero Inteiro: %d\n", n);
	printf("Numero Real: %.2f\n", nr);
	printf("Letra: %c\n", letra);
	printf("Palavra: %s\n", str);
	printf("Palavra: %s\n", strx);

*/