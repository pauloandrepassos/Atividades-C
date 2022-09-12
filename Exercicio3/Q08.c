/*Escreva um programa que pergunte ao usu´ario com qual velocidade costuma dirigir seu carro e imprima
a resposta que o guarda de trˆansito daria conforme as seguintes velocidades: > 75km/h, > 65km/h,
> 55km/h, > 45km/h, < 45km/h.

chcp 65001

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int velocidade;
    printf("Velocidade: ");
    scanf("%d", &velocidade);

    if (velocidade > 75) {
        printf("Você estava andando a mais de 75 km/h\n");
    }
    else if (velocidade > 65) {
        printf("Você estava andando a mais de 65 km/h\n");
    }
    else if (velocidade > 55) {
        printf("Você estava andando a mais de 55 km/h\n");
    }
    else if (velocidade > 45) {
        printf("Você estava andando a mais de 45 km/h\n");
    }
    else {
        printf("Você estava andando a menos de 45 km/h");
    }

    return 0;
}
