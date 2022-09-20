#include <stdio.h>

int main() {
    int num, i;
    printf("Digite um número: ");
    scanf(" %d", &num);

    printf("O numero %d é fatorado pelos numeros ", num);

    for(i = 2; num > 1; i++) {
        while(num % i == 0) {
            printf(" %d", i);
            num /= i;
        }
    }

    return 0;
}