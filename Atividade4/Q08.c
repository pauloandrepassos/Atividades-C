#include <stdio.h>

int main() {
    int num, soma, i;
    printf("Digite um número: ");
    scanf("%d" , &num);

    for (i = 0, soma = 0; soma < num; i++) {
        soma+=i;
    }

    if (soma == num)
        printf("\nÉ um número perfeito");
    else
        printf("\nNão é um número perfeito");

    return 0;
}