#include <stdio.h>

int main() {
    int n, a, b, count, termo;
    printf("N = ");
    scanf("%d", &n);
    a = 0;
    b = 1;
    count = 1;
    termo = 0;
    
    do {if (count == 1) {
            printf("%d", 0);
            count++;
            continue;
        }
        else if (count == 2) {
            printf(", %d", 1);
            count++;
            continue;
        }
        else {
            termo = a + b;
            a = b;
            b = termo;
            printf(", %d", termo);
            count++;
        }
        
    } while (count <= n);
    
}