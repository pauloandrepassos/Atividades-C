#include <stdio.h>

int main () {
    int n, m, i, j;
    printf("Número n: ");
    scanf("%d", &n);
    printf("Número m: ");
    scanf("%d", &m);

    printf("S = ");

    for (i = 1, j = 1; i < n && j < m; i++, j += 2) {
        printf("%d/%d + ", i, j);
    }
    printf("%d/%d", i, j);
}