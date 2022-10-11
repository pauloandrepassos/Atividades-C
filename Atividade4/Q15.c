#include <stdio.h>

int main() {
     int valor_compra, parcelas, valor_parcelas, resto;
     printf("Valor da compra: ");
     scanf(" %d", &valor_compra);
     printf("Qunatidade de parcelas: ");
     scanf(" %d", &parcelas);

     if (valor_compra % parcelas == 0) {
          printf("Serão %d parcelas de %d reais", parcelas, valor_compra/parcelas);
     }
     else {
          resto = valor_compra % parcelas;
          
          printf("Serão %d parcelas de %d reais e %d parcelas de %d reais", parcelas, valor_compra/parcelas);
     }


     return 0;
}