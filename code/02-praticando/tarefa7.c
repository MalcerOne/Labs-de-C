// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa7.c"


#include <stdio.h>

void arvorezinha (int n) {
    // Escreva uma função que recebe um inteiro n e imprime uma "arvorezinha" conforme a regra abaixo.

    // n = 1

    //  |

    // n = 2

    //  |
    // /|\

    // n = 3
    // e assim em diante para n = 4, 5, 6....

    if (n == 1){
        printf("|")
    }

    for (int i = 1; i <= n; i++)
    {
        printf(" " * i + "|" + i * " ")
        printf("")
    }
    
}

int main() {
    
    // TODO implemente seu programa aqui


    // Configurações do mutirão. Não mexer.
    #include "../telemetry.c"

    return 0;
}