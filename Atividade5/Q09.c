#include <stdio.h>

int reverso(int n) {
    if (n / 10 == 0) {
        printf("%d", n);
    } else {
        printf("%d", n % 10);
        reverso(n/10);
    }
    return 0;
}
int main() {
    int n, retorno;
    n = 123;

    reverso(n);
    
    return 0;
}