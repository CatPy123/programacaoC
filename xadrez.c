#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
void bispo(int d) {
    int a = 1, b = 6, e = 1, f = 8;


    for (int c = 0; c <= d; c++) {
        for (int i = 8; i >= 1; i--) {
            for (int j = 8; j >= 1; j--) {
                //printf("%d, %d", i, j);
                if (i == a && j == b) {
                    printf(" b ");
                }
                else if (i == e && j == f) {
                    printf(" t ");
                }
                else {
                    printf(" 0 ");
                }
            }
            printf("\n");
        }
        b--;
        a++;
        f--;
        printf("\n\n");
    }
}
int main() {
    int d;
    printf("Digite  quantidade de casas que você quer que as peças se movam: ");
    scanf("%d", &d);
    bispo(d);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.


    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
