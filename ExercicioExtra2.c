#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int pegar_num() {
    int num;
    printf("Digite um numero para saber se e par ou impar: ");
    scanf("%d", &num);
    return num;
}

void verificar_parimpar(int num) {
    if (num % 2 == 0) {
        printf("este numero e PAR\n");
    } else {
        printf("este numero e IMPAR\n");
    }
}

int main() {
    int num = pegar_num();
    verificar_parimpar(num);
    return 0;
}