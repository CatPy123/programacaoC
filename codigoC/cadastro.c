#include <stdio.h>

int main(){

    int idade;
    float altura;
    char nome[50];
    int matricula;

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite a sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
  
    printf("Digite a sua altura: \n");
    scanf("%f", &altura);

    printf("Nome do aluno: %s - Matrícula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %.2f", idade, altura);



}