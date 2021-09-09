#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {

    system("chcp 65001");

    printf("\n\n");
    printf("          P  /_\\  P                                 \n");
    printf("         /_\\_|_|_/_\\                               \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao        \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação!    \n");
    printf("    |" "  |  |_|  |"  " |                            \n");
    printf("    |_____| ' _ ' |_____|                            \n");
    printf("          \\__|_|__/                                 \n");
    printf("\n\n");

    int segundos = time(0);
    srand(segundos);

    int numeroGrande = rand();
    int numeroSecreto = numeroGrande % 100;
    
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0;

    int nivel;
    printf("Qual nível de dificuldade você quer jogar? ");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numeroDeTentativas;

    switch(nivel) {
        case 1:
            numeroDeTentativas = 20;
            break;
        case 2:
            numeroDeTentativas = 15;
            break;
        default:
            numeroDeTentativas = 6;
            break;
            }//fim switch    

    for(int i = 1; i <= numeroDeTentativas; i++) {

        printf("\n");
        printf("Tentativa %d de %d tentativas!\n", i, numeroDeTentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi: %d\n", chute);

        if(chute < 0) {
            printf("\n");
            printf("Você não pode chutar números negativos!\n");
            i--;
            continue;
        }//fim if

        acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;

        if(acertou) {
            break; 
        }//fim if acertou

        else if(maior) {
            printf("Você Errou! O número secreto é MENOR que o seu chute!\n");
        }//fim else if maior

        else {
            printf("Você Errou! O número secreto é MAIOR que o seu chute!\n");
        }//fim else

        double pontosPerdidos = abs(chute - numeroSecreto) / (double)2; // compilador identifica como double;
        pontos = (pontos - pontosPerdidos);

        tentativas++;

    }//fim for

    if(acertou) {
        printf("\n\n");
        printf("                       OOOOOOOOOOO                         \n");               
        printf("                   OOOOOOOOOOOOOOOOOOO                     \n");           
        printf("                OOOOOO  OOOOOOOOO  OOOOOO                  \n");       
        printf("              OOOOOO      OOOOO      OOOOOO                \n");     
        printf("            OOOOOOOO  #   OOOOO  #   OOOOOOOO              \n");    
        printf("           OOOOOOOOOO    OOOOOOO    OOOOOOOOOO             \n");   
        printf("          OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO            \n");  
        printf("          OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO            \n");  
        printf("          OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO            \n"); 
        printf("           OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO             \n");   
        printf("            OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO              \n");    
        printf("              OOOOO   OOOOOOOOOOOOOOO   OOOO               \n");     
        printf("               OOOOOO   OOOOOOOOO   OOOOOO                 \n");      
        printf("                  OOOOOO         OOOOOO                    \n");         
        printf("                       OOOOOOOOOOOO                        \n");
        printf("\n\n");

            printf("Você ganhou!\n");
            printf("Você acertou na %dª tentativa.\n", tentativas);
            printf("Total de pontos: %.1f\n", pontos);

        } else {

            printf("\n\n");
            printf("            \\|/ ____ \\|/            \n");       
            printf("             @~/ ,. \\~@              \n");
            printf("            /_( \\__/ )_\\            \n");
            printf("               \\__U_/                \n");
            printf("\n\n");


            printf("\n");
            printf("O número secreto era: %d\n", numeroSecreto);
            printf("Você não acertou! Fim de jogo!\n");
            
        }//fim else
}






/*
    if(nivel == 1) {
        numeroDeTentativas = 20;
        } else if(nivel == 2) {
            numeroDeTentativas = 15;
            } else {
                numeroDeTentativas = 6;
                }//fim else if
    */