#include <stdio.h>
#include <stdlib.h>

int ler_idade() {
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    return idade;
}

void classificar_nadador(int idade) {
    if (idade >= 5 && idade <= 7) {
        printf("categoria Infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("categoria Infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("categoria Juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("categoria Juvenil B\n");
    } else if (idade >= 18) {
        ("cateogoria Adulto\n");
    } else {
        printf("Sem categoria\n");
    }
}


int main() {
    int idade;
    idade = ler_idade();
    classificar_nadador(idade);
    return 0;
}