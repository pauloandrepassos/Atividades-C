#include <stdio.h>

int main() {
    int alt, sub, des, dia;
    alt = 10000;
    sub = 100;
    des = 50;
    dia = 0;
     while(alt > 0) {
        dia++;
        alt -= sub - des;
     }
     printf("Serao necessario %d dias.", dia);

     return 0;
}