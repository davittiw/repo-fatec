#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[30];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    printf("Ol� %s, voc� tem %i anos?", nome, idade);

    return(0);
}
