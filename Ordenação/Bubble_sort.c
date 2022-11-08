#include <stdio.h>

void bsort(int n, int *vet) {
    int i, j, aux;
    for (i = n - 1; i >= 1; i--) {
        for (j = 0; j < i; j++) {
            if (vet[j] > vet [j + 1]) {
                aux = vet[j];
                vet[j] = vet [j + 1];
                vet[j + 1] = aux;
            }
        }
    }
}

void bsort_rec(int n, int *vet) {
    int i, aux, troca = 0;
    for (i = 0; i < n - 1; i++) {
        if (vet[i] > vet[i + 1]) {
            aux = vet[i];
            vet[i] = vet[i + 1];
            vet [i + 1] = aux;
            troca = 1;
        }
    }
    if (troca != 0) {
        bsort_rec(n - 1, vet);
    }
}

int main() {
    int vetor[] = {25, 48, 37, 12, 57, 86, 33, 92};
    int tamanho = sizeof(vetor)/sizeof(int);
    bsort_rec(tamanho, vetor);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}