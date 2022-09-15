#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, maior, menor, cont;
    int inicio = 1;
    printf("Digite 10 numeros:\n");

    for (cont = 1; cont <= 10; cont++) {
        printf("%d ", cont);
        scanf( "%d", &num);
        //num = rand() % 10;
        if (inicio == 1) {
            maior = num;
            menor = num;
            inicio = 0;
        }
        inicio = 0;
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }
    printf("\nMaior: %d\nMenor: %d", maior, menor);
}