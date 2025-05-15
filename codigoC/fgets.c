#include <stdio.h>

int main(){


    char nome[50];
    printf("Digite o seu nome completo: ");
    fgets(nome, 50, stdin); // le no maximo 49 caracteres da entrada padrao (stdin)
    nome[strcspn(nome, "\n")] = 0; // essa linha remove o caractere de nova linha (\n)que fgets pode incluir na string. strcspn retorna o índice da primeira ocorrência de \n na string nome.
    printf("Nome completo digitado: %s\n", nome);

}