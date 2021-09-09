#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {

    system("chcp 65001");

	printf("*****************************************\n");
    printf("*Bem-vindo ao nosso jogo de adivinhação!*\n");
    printf("*****************************************\n");

    int segundos = time(0);
    srand(segundos);

    int numeroGrande = rand();
    int numeroSecreto = numeroGrande % 100;
    
    int chute;
    int ganhou = 0;
    int tentativas = 1;
    double pontos = 1000;

    while(ganhou == 0) {

        printf("\n");
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi: %d\n", chute);

        if(chute < 0) {
            printf("\n");
            printf("Você não pode chutar números negativos!\n");

            continue;
        }//fim if

        int acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;

        if(acertou) {
            printf("Parabéns! Você acertou o número secreto!\n", tentativas); //acertou retorna como true (ou 1);
            ganhou = 1; 
        }//fim if acertou

        else if(maior) {
            printf("Você Errou! O número secreto é MENOR que o seu chute!\n");
            printf("Tente novamente!\n");
        }//fim else if maior

        else {
            printf("Você Errou! O número secreto é MAIOR que o seu chute!\n");
            printf("Tente novamente!\n");
        }//fim else

        tentativas++;

        double pontosPerdidos = abs(chute - numeroSecreto) / (double)2; // compilador identifica como double;
        pontos = pontos - pontosPerdidos;

    }//fim while

    printf("Fim de jogo!\n");
    printf("Você acertou na %dª tentativa.\n", tentativas - 1);
    printf("Total de pontos: %.1f\n", pontos);

}