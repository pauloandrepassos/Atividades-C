#include <stdio.h>

void inverte(int n, int *vet) {
    int i;
    int n_invert[n];
    for (i = 0; i < n; i++) {
        n_invert[i] = vet[i];
    }
    for (i = 0; i < n; i++) {
        vet[i] = n_invert[n - i - 1];
    }
}

int main() {
    int tamanho, i;
    printf("Informe o tamanho do vetor: "); 
    scanf(" %d", &tamanho);
    int numeros[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("Informe o numero %d: ", i + 1);
        scanf(" %d", &numeros[i]);
    }
    inverte(tamanho, numeros);

    for (i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}