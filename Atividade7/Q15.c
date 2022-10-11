#include <stdio.h>

void multp(int matriz_a[2][2], int matriz_b[2][2], int prod_mat[2][2]) {
    int l, c, i, soma;
    for (l = 0; l < 2; l++) {
        for (c = 0; c < 2; c++) {
            soma = 0;
            for (i = 0; i < 2; i++) {
                soma += matriz_a[l][i] * matriz_b[i][c];
            }
            prod_mat[l][c] = soma;
        }
    }
}

int main() {
    int matriz_a[2][2] = {{3, 4}, {5, 1}};
    int matriz_b[2][2] = {{1, 0}, {0, 1}};
    int prod_mat[2][2];
    int l, c, i, soma;

    multp(matriz_a, matriz_b, prod_mat);

    for (l = 0; l < 2; l++) {
        for (c = 0; c < 2; c++) {
            printf("%d ", prod_mat[l][c]);
        }
        printf("\n");
    }

    
}