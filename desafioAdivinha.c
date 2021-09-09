#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	printf("\n");
	printf("*****************************************\n");
	printf("*Bem vindo ao nosso Jogo da Adivinhação!*\n");
	printf("*****************************************\n");
	

	int numeroSecreto = 42;
	int chute;
	int tentativas = 3;

	for(int i = 1; i <= tentativas; i++) {

		printf("\n");
		printf("Tentativa %d\n", i);
		printf("Informe o seu chute: ");
		scanf("%d", &chute);
		printf("Seu chute: %d\n", chute);
		printf("\n");

		if(chute < 0) {
			printf("Você não pode chutar números negativos!\n");
			printf("Tente novamente!\n");
			i--;
			continue;
		}//fim if

		if(chute == numeroSecreto) {
			printf("Parabéns! Você acertou o número secreto na %dª tentativa!\n", i);
			break;
		} else if(chute > numeroSecreto) {
			printf("Você errou! O número secreto é MENOR que o seu chute!\n");
			printf("Tente novamente!\n");
		} else {
			printf("Você errou! O número secreto é MAIOR que o seu chute!\n");
			printf("Tente novamente!\n");
			}//fim else

			if(i == 3 && chute != numeroSecreto) {
				printf("Limite te tentativas excedido!\n");
				printf("Fim de jogo!\n");
				break;
			}//fim if
	}//fim for
}