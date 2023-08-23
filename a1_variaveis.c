#include <stdio.h>
#include <stdlib.h>

void main (){
    char nome[30];
    char endereco[30];
    int idade;
    
    printf("Nome: \n");
    scanf("%s", &nome);
    printf("endereco: \n");
    scanf("%s", &endereco);
    printf("idade: \n");
    scanf("%d", &idade);

    printf("\nNome: %s", nome);
    printf("\nendereco: %s", endereco);
    printf("\nidade: %d", idade);

}
