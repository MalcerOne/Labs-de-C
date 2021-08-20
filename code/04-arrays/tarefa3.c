// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab4-"
#define SOLUTIONFILE "tarefa3.c"


#include <stdio.h>
#define STRING_LEN 100

/* TODO: implemente sua função conta_a aqui */
int conta_a(char str[STRING_LEN]){
    int s = 0;
    
    for (int i = 0; i < STRING_LEN; i++){
        if (str[i] == '\0'){
            return s;
        } else if (str[i] == 'a'){
            s += 1;
        }
    }

    return 0;
}

int main() {
    
    assertEquals("String \"abc\"", conta_a("abc"), 1);
    assertEquals("String \"bccdsfsd123124 sfdf 234\"", conta_a("bccdsfsd123124 sfdf 234"), 0);
    assertEquals("String \"1234354yrkgjdlfjdlk\"", conta_a("1234354yrkgjdlfjdlk"), 0);

    // 'a' != 'A' 
    assertEquals("String \"aAa\"", conta_a("aAa"), 2);

    assertEquals("String \"a a a a  \"", conta_a("a a a a"), 4);

    
    printSummary

    #include "../telemetry.c"

    return 0;
}