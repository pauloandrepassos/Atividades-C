#include <stdio.h>

int main() {
    int num, count, multp;
    printf("Digite um número: ");
    scanf("%d" , &num);

    for (count = 2, multp = 0; count < num; count++) {
        if (num % count == 0) {
            printf("Múltiplo de %d\n", count);
            multp++;
        }
    }

    if (multp == 0) {
        printf("É um número primo\n");
    }
    else {
        printf("Não é número primo\n");
    }
    return 0;
}