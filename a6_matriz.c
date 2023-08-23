#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    int matriz[2][2];

    for (int linha = 0; linha < 2; linha++)
    {
        for(int coluna = 0; coluna < 2; coluna++)
        {
            printf("Digite a linha %d e coluna %d da matriz: ", linha+1, coluna+1);
            scanf("%d",&matriz[linha][coluna]);
        }
    }

    for (int linha = 0; linha < 2; linha++)
    {
        for(int coluna = 0; coluna < 2; coluna++)
        {
            printf("%d\n",matriz[linha][coluna]);
        }
    }
    return 0;
}