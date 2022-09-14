#include <stdio.h>

int main() {
    int alt, sub, des, dia;
    alt = 10000;
    sub = 100;
    des = 50;
    dia = 0;
    while (alt > 0) {
        dia += 1;
        alt -= sub - des;
    }
    printf("Sera nescessario %d dias para subir", dia);


    return 0;
}