#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NUMERO_DE_TENTATIVAS 5

int main() {

	printf("*****************************************\n");
    printf("*Bem-vindo ao nosso jogo de adivinhação!*\n");
    printf("*****************************************\n");

    int numeroSecreto = 42;
    int chute;


    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {

        printf("\n");
        printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi: %d\n", chute);

        if(chute < 0) {
            printf("\n");
            printf("Você não pode chutar números negativos!\n");
            i--;

            continue;
        }//fim if

        int acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;
        int menor = chute < numeroSecreto;

        if(acertou) {
            printf("Parabéns! Você acertou!\n"); //acertou retorna como true (ou 1);
            break; 
        }//fim if acertou

        else if(maior) {
            printf("Você Errou! O número secreto é MENOR que o seu chute!\n");
            printf("Tente novamente!\n");
        }//fim else if maior

        else {
            printf("Você Errou! O número secreto é MAIOR que o seu chute!\n");
            printf("Tente novamente!\n");
        }//fim else
    }//fim for

    printf("Fim de jogo!\n");

}