#include <stdio.h>

int main() {
    char a, b, ch, lixo;
    int qt;
    printf("Caractere 1: ");
    scanf("%c" , &a);

    printf("Caractere 2: ");
    scanf("%c %c" , &lixo, &b);

    for (ch = a + 1, qt = 0; ch < b; ch++, qt++)
    {
        printf("%c ", ch);
    }
    printf("\nQuantidade de caracteres: %d", qt);
    
    return 0;
}