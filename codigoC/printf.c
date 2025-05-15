#include <stdio.h>

int main(){

    // comentário de uma linha
    //print("texto com formatação", variavel1, variavel2, ...);
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "cat";
    // aspas simples quando for um único caracter e duplas quando forem mais de um caracter ex palavras

    printf("A idade do %s é: %d\n", nome, idade);
    // especificador de formato ex: %formato
    /*
     %d imprime um inteiro em formato decimal
    %i equivalente %d
    %f imprime um float no formato padrão
    %e imprime um float em notação científica (ex: 5*10**-2)
    %c imprime um único caractere
    %s imprime uma cadeia de caracteres (string)
    
    
    */

    printf("A altura é: %.2f\n", altura);
    // .2 limita para duas casas decimais 
    printf("A altura é: %c\n", opcao);
    printf("O nome é: %s\n", nome);



}