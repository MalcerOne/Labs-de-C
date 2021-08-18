#include <stdio.h>

int main() {
    int n1;
    int n2;

    printf("Digite dois numeros:");
    scanf("%d", &n1);
    scanf("%d", &n2);

    if (n2 == 0) {
        printf("Erro! Numero nao pode ser zero.\n");
    } else if (n1 % n2 == 0) {  
        printf("Primeiro numero %d multiplo de %d\n", n1, n2);
    } else {
        printf("O primeiro numero nao eh um multiplo do segundo.\n");
    }

    return 0;
}