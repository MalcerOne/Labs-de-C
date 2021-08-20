#include <stdio.h>

int main(){
    long matriz[5][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};

    for (int coluna = 0; coluna < 4; coluna++){
        int s = 0;

        for (int linha = 0; linha < 5; linha++){
            s += matriz[linha][coluna];
        }

        printf("Soma da coluna %d: %d\n", coluna+1, s);
    }
    

    return 0;
}