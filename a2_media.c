#include <stdio.h>
#include <stdlib.h>


void main(){
    float nota1, nota2, media;
    
    printf("insira nota 1: \n");
    scanf("%f", &nota1);
    printf("insira nota 2: \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("media = %.2f", media);
}