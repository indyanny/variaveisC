#include<stdio.h>

#define texto "Entrada e saida de dados."

int main(){
    printf("%s\n", texto);

    int idade = 0;
    float altura = 0.0;
    char nome[40] = "";

    printf("Digite idade:\n");
    scanf("%d", &idade);

    printf("Digite altura:\n");
    scanf("%f", &altura);

    printf("Digite nome:\n");
    scanf("%s", nome);

    printf("Dados informados:\n");
    printf("Idade: %d.\n", idade);
    printf("Altura: %.2f.\n", altura);
    printf("Nome: %s.\n", nome);
    }