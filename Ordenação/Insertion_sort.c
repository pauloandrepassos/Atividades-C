#include <stdio.h>

void insercao(int n, int *vet) {
    int i, j, aux;
    for (i = 1; i < n; i++) {
        aux = vet[i];
        j = i - 1;
        while (j >= 0 && vet[j] > aux) {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = aux;
    }
}


int main() {
    int vetor[] = {25, 48, 37, 12, 57, 86, 33, 92};
    
    int tamanho = sizeof(vetor)/sizeof(int);
    insercao(tamanho, vetor);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}