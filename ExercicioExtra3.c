#include <stdio.h>
#include <stdlib.h>

int receber_valor(int num) {
    printf("digite um numero para descobrir o valor de S: ");
    scanf("%d", &num);
    return num;
}

void valor_s(int num) {
    int s = 1 + (1.0/2.0) + (1/3.0) + (1.0/4.0) + (1.0/5.0) + (1.0/num);
    printf("O valor de s e == %d \n", s);
}

int main () {
    int num;
    int valor_numero = receber_valor(num);
    valor_s(valor_numero);
    return 0;
}