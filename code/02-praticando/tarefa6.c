// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa6.c"


#include <stdio.h>
void multiploFor (int n) {
    for (int i = 1; i <= n; i++)
    {
       if (i % 3 == 0 && i % 5 == 0) {
           printf("\nNumero: %d -> ", i);
           printf("por três e por cinco");
       } else if (i % 3 != 0 && i % 5 == 0) {
           printf("\nNumero: %d -> ", i);
           printf("apenas por cinco");       
       } else if (i % 3 == 0 && i % 5 != 0) {
           printf("\nNumero: %d -> ", i);
           printf("apenas por três");
       } else if (i % 3 != 0 && i % 5 != 0) {
           printf("\nNumero: %d -> ", i);
           printf("nenhum");
       }
       
       
       printf("\n");
    }
    
}


int main() {
    
    // TODO implemente seu programa aqui
    multiploFor(15);

    

    // Configurações do mutirão. Não mexer.
    #include "../telemetry.c"

    return 0;
}