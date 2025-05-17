#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // gerar número aleatório
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // número entre 1 e 100

    // inicio do jogo
    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");  
    printf("I. Igual\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &tipoComparacao);

    printf("Escolha um número entre 1 e 100: ");
    scanf("%d", &numeroJogador);

    // exibir número do computador
    // printf("Número do computador: %d\n", numeroComputador);

    switch (tipoComparacao) {
        case 'M':
        case 'm':
            printf("Você escolheu a opção maior\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0;
            break;
        case 'N':
        case 'n':
            printf("Você escolheu a opção menor\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0;
            break;
        case 'I':
        case 'i':
            printf("Você escolheu a opção igual\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0;
            break;
        default:
            printf("Opção de jogo inválido\n");
            break;
            return 1;
    }

    printf("O número do computador é: %d e o do jogador é: %d\n", numeroComputador,numeroJogador);

    if  (resultado == 1) {
        printf("Parabéns, você venceu!\n");
    } else if (resultado == 0) {
        printf("Infelizmente, você perdeu!\n");
    } else {
        printf("Resultado inválido\n");
    }
}