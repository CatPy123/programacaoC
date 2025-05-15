#include <stdio.h>

int main(){

    int idade;
    float altura;
    char opcao;
    char nome[20];

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);
  
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("O seu nome é: %s\n", nome);

    printf("Digite uma letra: ");
    scanf(" %c", &opcao);
    printf("A letra é: %c\n", opcao);

    //usar fget para nomes compostos ou expressões regulares

    //lendo strings com espaços - fgets


}