#include <stdio.h>

int main(){
    int i=2, j=4;
    int *p, *q;
    //p = i; um ponteiro está recebendo o conteúdo de uma variável.
    q = &j;
    p = &*&i;
    //i = (*&)j; o operador de dereferência e o de endereço estão entre parênteses antes da variável.
    i = *&j;
    i = *&*&j;
    //q = *p; O ponteiro 'q' está recebendo o conteúdo para qual o ponteiro 'p' aponta.
    i = (*p)++ + *q;
    return 0;
}
