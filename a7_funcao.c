#include <stdio.h>
#include <stdlib.h>

float calcMassa(float a, float b){
    const float mA=321.43;
    const float mB=150.72;

    printf("\n 1,2 : 1,0 \t: = %f",(1,2*mA+1*mB));
    printf("\n 1,4 : 1,0 \t: = %f",(1,4*mA+1*mB));
    printf("\n 1,0 : 1,6 \t: = %f",(1*mA+1,6*mB));

    return (a * mA) + (b*mB);
}

int main(int argc, char const *argv[])
{
    float a=0, b=0, resultado=0;

    printf("\n Digite as massas do elemento A e B");
    scanf("%f %f", &a, &b);

    resultado = calcMassa(a, b);
    printf("\n resultado %f", resultado);

    return 0;
}
