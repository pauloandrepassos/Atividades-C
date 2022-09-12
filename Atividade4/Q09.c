#include <stdio.h>

int main() {
    int num, resto;
    printf("Digite um número: ");
    scanf("%d", &num);

    while (num > 0) {
        resto = num % 10;
        num = num / 10;
        printf("%d", resto);
    }

/*
    do {resto = num % 10;
        num = num / 10;
        printf("%d", resto);
    } while (num > 10);
*/  
}