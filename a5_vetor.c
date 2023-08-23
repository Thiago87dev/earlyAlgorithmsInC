#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char nome[20];

    printf("Digite o nome do aluno: \n");
    gets(nome);

    for(int i = 0; nome[i]!= ' '; i++) nome[i] = toupper(nome[i]);
    
    printf("nome convertido: %s", nome);

    return 0;
}
