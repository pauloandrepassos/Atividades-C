#include <stdio.h>

int main () {
    int num1, num2, resto;
    printf("Valor 1: ");
    scanf(" %d", &num1);
    printf("Valor 2: ");
    scanf(" %d", &num2);
    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);
    printf("O máximo devisor comum de é %d \n", num1);

    return 0;
}



































































































