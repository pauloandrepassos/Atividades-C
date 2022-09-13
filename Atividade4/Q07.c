#include <stdio.h>

int main() {
    int a, b, potencia, i;
    printf("Valor de a: ");
    scanf("%d", &a);
    printf("Valor de b: ");
    scanf("%d", &b);
    potencia = a;
    for(i = 1; i < b; i++, potencia = a * potencia);
    if (b == 0) {
        printf("%d elevado a %d é igual a %d", a, b, 1);
    }
    else {
        printf("%d elevado a %d é igual a %d", a, b, potencia);
    }

    return 0;
}