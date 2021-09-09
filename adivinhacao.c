#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	printf("*****************************************\n");
    printf("*Bem-vindo ao nosso jogo de adivinhação!*\n");
    printf("*****************************************\n");

    int numeroSecreto = 42;
    int chute;

    printf("\n");
    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    
    printf("Seu chute foi: %d\n", chute);

    if(chute == numeroSecreto) { 
        printf("Parabéns! Você acertou!\n"); //acertou retorna como true (ou 1);
    } else {
        int maior = (chute > numeroSecreto);
        if(maior) {
            printf("Você Errou! O número secreto é MENOR que o seu chute!\n");
            printf("Tente novamente!\n");
        } else {
            printf("Você Errou! O número secreto é MAIOR que o seu chute!\n");
            printf("Tente novamente!\n");
        }
    }
}