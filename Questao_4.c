#include <stdio.h>

int main() {

    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* (a) */
    valor = 10; // A vari�vel int "valor" recebe o valor 10.
    p1 = &valor; // O ponteiro "pl" aponta para o inteiro "valor".
    *p1 = 20; // O conte�do da vari�vel para qual "pl" aponta agora recebe o valor 20.
    printf("%d \n", valor); // imprime na tela o conte�do da vari�vel "valor" que deve ser 20.

    /* (b) */
    temp = 26.5; // A vari�vel "temp" do tipo float, recebe o valor 26.5.
    p2 = &temp; // O ponteiro "p2" recebe o endere�o de mem�ria da vari�vel "temp".
    *p2 = 29.0; // O conte�do da vari�vel para qual "p2" aponta agora recebe o valor 29.0.
    printf("%.1f \n", temp); // imprime na tela o conte�do da vari�vel "temp" que deve ser 29.0.

    /* (c) */
    p3 = &nome[0]; // o ponteiro "p3" agora aponta para a primeira posi��o do array tipo ponteiro para char, "nome".
    aux = *p3; // a vari�vel "aux" do tipo char, recebe o conte�do (o caractere 'P') da vari�vel para o qual p3 aponta.
    printf("%c \n", aux); // imprime na tela o conte�do de "aux" que deve ser o caractere 'P'.

    /* (d) */
    p3 = &nome[4]; // o ponteiro "p3" agora aponta para a quinta posi��o do array de ponteiros "nome".
    aux = *p3; // a vari�vel "aux" do tipo char recebe o conte�do (caractere 'e') para qual "p3" aponta.
    printf("%c \n", aux); //  imprime na tela o conte�do de "aux" quer deve ser o caractere 'e'.

    /* (e) */
    p3 = nome; // o ponteiro "p3" recebe o endere�o de mem�ria da primeira poci��o do array de ponteiros "nome".
    printf("%c \n", *p3); // imprime na tela o conte�do (caractere 'P') do endere�o que "p3" armazenou.

    /* (f) */
    p3 = p3 + 4; // o ponteiro "p3" recebe o endere�o resultante da soma do endere�o anterior de "p3" mais o valor 4.
    printf("%c \n", *p3); // imprime o conte�do (caractere 'e') do endere�o para qual "p3" aponta.

    /* (g) */
    p3--; // decrementa em um, o valor do endere�o para qual o ponteiro "p3" aponta.
    printf("%c \n", *p3); // imprime o novo valor de "p3" que deve corresponder a quarta posi��o (caractere 't') do array "nome".

    /* (h) */
    vetor[0] = 31; // aloca um endere�o de mem�ria e armazena o valor 31.
    vetor[1] = 45; // armazena o valor 45 no endere�o seguinte.
    vetor[2] = 27; // armazena o valor 27 em um endere�o depois do anterior.
    p4 = vetor; // o ponteiro "p4" recebe o endere�o do array "vetor".
    idade = *p4; // a vari�vel "idade" recebe o conte�do armazenado no primeiro endere�o de mem�ria do array "vetor" que � para onde "p4" aponta.
    printf("%d \n", idade); // imprime o conte�do da vari�vel "idade" que deve ser o valor 31.

    /* (i) */
    p5 = p4 + 1; // o ponteiro "p5" recebe o endere�o posterior (endere�o do vetor[1]) ao qual "p4" aponta.
    idade = *p5; // a vari�vel "idade" recebe o conte�do para qual o ponteiro "p5" aponta.
    printf("%d \n", idade); // imprime o conte�do da vari�vel "idade" que deve ser o valor 45.

    /* (j) */
    p4 = p5 + 1; // o ponteiro "p4" recebe o endere�o posterior (endere�o do vetor[2]) ao qual "p5" aponta.
    idade = *p4; // a vari�vel "idade" recebe o conte�do para qual o ponteiro "p4" aponta.
    printf("%d \n", idade); // imprime o conte�do da vari�vel "idade" que deve ser o valor 27.


    /* (l) */
    p4 = p4 - 2; // o ponteiro "p4" aponta para o endere�o de mem�ria correspondente ao antigo endere�o apontado subtraido do valor 2 que � o endere�o do vetor[0].
    idade = *p4; // a vari�vel "idade" recebe o conte�do para qual o ponteiro "p4" aponta.
    printf("%d \n", idade); // imprime o conte�do da vari�vel "idade" que deve ser o valor 31.

    /* (m) */
    p5 = &vetor[2] - 1; // O ponteiro "p5" recebe o endere�o do vetor[2] subtra�do de 1, que � o mesmo endere�o do vetor[1].
    printf("%d \n", *p5); // imprime o conte�do do endere�o para qual o ponteiro "p5" aponta; o conte�do dever� ser o valor 45.

    /* (n) */
    p5++; // soma com o valor 1, o endere�o para qual o ponteiro "p5" aponta.
    printf("%d \n", *p5); // imprime o conte�do do endere�o para qual "p5" aponta; o conte�do dever� ser 27.
    return(0);
}

/* Resultado da execu��o do programa:
20
29.0
P
e
P
e
t
31
45
27
31
45
27
*/
