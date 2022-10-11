#include <stdio.h>

void soma_matriz(int vet_a[3][3], int vet_b[3][3], int soma[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma[i][j] = vet_a[i][j] + vet_b[i][j];
        }
    }
}

void sub_matriz(int vet_a[3][3], int vet_b[3][3], int sub[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sub[i][j] = vet_a[i][j] - vet_b[i][j];
        }
    }
}

int main() {
    int i, j, linhas, colunas;
    int matriz_a[3][3] = {{1, 2, 9}, {1, 2, 3}, {1, 2, 3}};
    int matriz_b[3][3] = {{3, 2, 1}, {3, 2, 1}, {3, 2, 1}};
    int matriz_soma[3][3];
    int matriz_sub[3][3];

    soma_matriz(matriz_a, matriz_b, matriz_soma);
    sub_matriz(matriz_a, matriz_b, matriz_sub);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz_soma[i][j]);
        }
    printf("\n");
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz_sub[i][j]);
        }
    printf("\n");
    }

}