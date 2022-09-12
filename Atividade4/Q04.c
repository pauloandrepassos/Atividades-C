#include <stdio.h>

int main(){
    int num, fat_num;
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("%d! =", num);
    fat_num = 1;
    if (num == 1) {
        printf(" %d", fat_num);
    }
    else {
        for (int i = num; i > 1; i--) {
            printf(" %d x", i);
            fat_num *= i;
        }
        printf(" 1 = %d\n", fat_num);
    }


    return 0;
}
