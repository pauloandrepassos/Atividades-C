/*Implemente uma funcao que receba como parˆametro um vetor de n´umeros inteiros de tamanho n e
retorne quantos n´umeros pares est˜ao armazenados nesse vetor. A fun¸c˜ao deve obedecer ao seguinte
prot´otipo:
int pares(int n, int *vet);*/

#include <stdio.h>

int pares(int n, int *vet) {
    int quantidade = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i] % 2 == 0) {
            quantidade++;
        }
    }
    return quantidade;
}

int main() {
    int tamanho;
    printf("Informe o tamanho do vetor: "); 
    scanf(" %d", &tamanho);
    int numeros[tamanho];

    for (int i = 0; i < tamanho; i++) {
        printf("Informe o numero %d: ", i + 1);
        scanf(" %d", &numeros[i]);
    }
    printf("Quantidade de numeros pares: %d", pares(tamanho, numeros));
    return 0;
}