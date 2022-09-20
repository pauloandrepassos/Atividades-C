#include <stdio.h>

int pot(int n, int p) {
    if (p == 0) {
        return 1;
    }
    else {
        return n * pot(n, p - 1);
    }
}
int main() {
    int n, p, r;

    n = 5;
    p = 2;

    r = pot(n, p);

    printf("%d", r);

    return 0;
}