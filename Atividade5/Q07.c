#include <stdio.h>

int soma(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return n + soma(n - 1);
    }
}

int main() {
    int n, result;

    printf("Digite um numero: ");
    scanf(" %d", &n);

    result = soma(n);

    printf("A soma dos %d primeiros numeros é %d", n, result);

    return 0;
}