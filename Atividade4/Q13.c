#include <stdio.h>

int main () {
    /*int num1, num2, resto;
    printf("Valor 1: ");
    scanf(" %d", &num1);
    printf("Valor 2: ");
    scanf(" %d", &num2);
    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);
    printf("O máximo devisor comum de é %d \n", num1);*/

    int num1, num2, count, mdc;

    printf("Numero 1: ");
    scanf(" %d", &num1);

    printf("Numero 2: ");
    scanf(" %d", &num2);

    count = 1; mdc = 1;

    while (count <= num1 && count <= num2) {
        if (num1 % count == 0 && num2 % count == 0)
            mdc = count;
        count++;
    }
    printf("O maximo divisor comum de %d e %d é %d", num1, num2, mdc);

    return 0;
}



































































































