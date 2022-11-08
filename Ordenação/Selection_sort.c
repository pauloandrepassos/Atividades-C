#include <stdio.h>

void selecao(int n, int *vet) {
    int i, j, min, aux;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if(vet[j] < vet [min]) {
                min = j;
            }
        }
        if(vet[i] != vet[min]) {
            aux = vet[i];
            vet[i] = vet[min];
            vet[min] = aux;
        }
    }
}

int main() {
    int vetor[] = {25, 48, 37, 12, 57, 86, 33, 92};
    
    int tamanho = sizeof(vetor)/sizeof(int);
    selecao(tamanho, vetor);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}