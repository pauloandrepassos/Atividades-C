/*Implemente uma funcao que receba como parametro um vetor de numeros reais de tamanho n e
retorne quantos numeros negativos estao armazenados nesse vetor. A funcao deve obedecer ao seguinte
prototipo:
int negativos(int n, float *vet);*/

#include <stdio.h>

int negativos(int n, float *vet) {
    int quantidade = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i] < 0) {
            quantidade++;
        }
    }
    return quantidade;
}

int main() {
    int tamanho;
    printf("Informe o tamanho do vetor: "); 
    scanf(" %d", &tamanho);
    float numeros[tamanho];

    for (int i = 0; i < tamanho; i++) {
        printf("Informe o numero %d: ", i + 1);
        scanf(" %f", &numeros[i]);
    }
    printf("Quantidade de numeros negativos: %d", negativos(tamanho, numeros));

    return 0;
}