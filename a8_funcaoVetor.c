#include <stdio.h>
#include <stdlib.h>

void inserir(int a[])
{
    for(int i = 0; i < 3; i++)
    {
        printf("\n Digite o valor %d ", i);
        scanf("%d", &a[i]);
    }
}

void imprimir(int b[])
{
    for(int i = 0; i < 3; i++)
    {
        printf("\n numeros[%d] = %d ", i, 2*b[i]);
    }
}

int main(int argc, char const *argv[])
{
    int numero[3];
    printf("\n Preencha o vetor: \n");
    inserir(numero);
    
    printf("\n Valor dobrado:  \n");
    imprimir(numero);


    return 0;
}
;