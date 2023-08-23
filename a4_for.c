#include <stdio.h>
#include <stdlib.h>

int main() {
    int contador;

    printf("Digite um numero: ");
    scanf("%d", &contador);

    for (contador; contador >= 1; contador--) {
        printf("%d ", contador);
    }

    return 0;
}
