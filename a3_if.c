#include <stdio.h>
#include <stdlib.h>

void main(){
    float salario, inss, ir, sal_liquido;

    printf("digite seu salario bruto ");
    scanf("%f", &salario);

    if(salario <= 1693.72){
        inss = salario * 0.08;
    }else
    if(salario >= 1693.73 && salario <= 2822.90){
        inss = salario * 0.09;
    }

    sal_liquido = (salario - inss) - ir;
    printf("\n Desconto Inss: %.2f\n", inss);
    printf("\n Salario liquido: %.2f\n", sal_liquido);

}