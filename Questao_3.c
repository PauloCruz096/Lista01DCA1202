#include <stdio.h>

int main(){
    int i=2, j=4;
    int *p, *q;
    //p = i; um ponteiro est� recebendo o conte�do de uma vari�vel.
    q = &j;
    p = &*&i;
    //i = (*&)j; o operador de derefer�ncia e o de endere�o est�o entre par�nteses antes da vari�vel.
    i = *&j;
    i = *&*&j;
    //q = *p; O ponteiro 'q' est� recebendo o conte�do para qual o ponteiro 'p' aponta.
    i = (*p)++ + *q;
    return 0;
}
