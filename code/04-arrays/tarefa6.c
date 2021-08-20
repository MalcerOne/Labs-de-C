#include <stdio.h>

int main(){
    long matriz[5][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};

    
    int maior_valor = 0;
    int maior_indice = 0;

    for (int coluna = 0; coluna < 4; coluna++){
        int s = 0;

        for (int linha = 0; linha < 5; linha++){
            s += matriz[linha][coluna];
        }

        printf("Soma da coluna %d: %d\n", coluna+1, s);

        if (s > maior_valor){
            maior_valor = s;
            maior_indice = coluna + 1;
        }
    }

    printf("Indice da coluna de maior valor: %d\n", maior_indice);
    

    return 0;
}