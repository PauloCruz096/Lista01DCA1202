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
    valor = 10; // A variável int "valor" recebe o valor 10.
    p1 = &valor; // O ponteiro "pl" aponta para o inteiro "valor".
    *p1 = 20; // O conteúdo da variável para qual "pl" aponta agora recebe o valor 20.
    printf("%d \n", valor); // imprime na tela o conteúdo da variável "valor" que deve ser 20.

    /* (b) */
    temp = 26.5; // A variável "temp" do tipo float, recebe o valor 26.5.
    p2 = &temp; // O ponteiro "p2" recebe o endereço de memória da variável "temp".
    *p2 = 29.0; // O conteúdo da variável para qual "p2" aponta agora recebe o valor 29.0.
    printf("%.1f \n", temp); // imprime na tela o conteúdo da variável "temp" que deve ser 29.0.

    /* (c) */
    p3 = &nome[0]; // o ponteiro "p3" agora aponta para a primeira posição do array tipo ponteiro para char, "nome".
    aux = *p3; // a variável "aux" do tipo char, recebe o conteúdo (o caractere 'P') da variável para o qual p3 aponta.
    printf("%c \n", aux); // imprime na tela o conteúdo de "aux" que deve ser o caractere 'P'.

    /* (d) */
    p3 = &nome[4]; // o ponteiro "p3" agora aponta para a quinta posição do array de ponteiros "nome".
    aux = *p3; // a variável "aux" do tipo char recebe o conteúdo (caractere 'e') para qual "p3" aponta.
    printf("%c \n", aux); //  imprime na tela o conteúdo de "aux" quer deve ser o caractere 'e'.

    /* (e) */
    p3 = nome; // o ponteiro "p3" recebe o endereço de memória da primeira pocição do array de ponteiros "nome".
    printf("%c \n", *p3); // imprime na tela o conteúdo (caractere 'P') do endereço que "p3" armazenou.

    /* (f) */
    p3 = p3 + 4; // o ponteiro "p3" recebe o endereço resultante da soma do endereço anterior de "p3" mais o valor 4.
    printf("%c \n", *p3); // imprime o conteúdo (caractere 'e') do endereço para qual "p3" aponta.

    /* (g) */
    p3--; // decrementa em um, o valor do endereço para qual o ponteiro "p3" aponta.
    printf("%c \n", *p3); // imprime o novo valor de "p3" que deve corresponder a quarta posição (caractere 't') do array "nome".

    /* (h) */
    vetor[0] = 31; // aloca um endereço de memória e armazena o valor 31.
    vetor[1] = 45; // armazena o valor 45 no endereço seguinte.
    vetor[2] = 27; // armazena o valor 27 em um endereço depois do anterior.
    p4 = vetor; // o ponteiro "p4" recebe o endereço do array "vetor".
    idade = *p4; // a variável "idade" recebe o conteúdo armazenado no primeiro endereço de memória do array "vetor" que é para onde "p4" aponta.
    printf("%d \n", idade); // imprime o conteúdo da variável "idade" que deve ser o valor 31.

    /* (i) */
    p5 = p4 + 1; // o ponteiro "p5" recebe o endereço posterior (endereço do vetor[1]) ao qual "p4" aponta.
    idade = *p5; // a variável "idade" recebe o conteúdo para qual o ponteiro "p5" aponta.
    printf("%d \n", idade); // imprime o conteúdo da variável "idade" que deve ser o valor 45.

    /* (j) */
    p4 = p5 + 1; // o ponteiro "p4" recebe o endereço posterior (endereço do vetor[2]) ao qual "p5" aponta.
    idade = *p4; // a variável "idade" recebe o conteúdo para qual o ponteiro "p4" aponta.
    printf("%d \n", idade); // imprime o conteúdo da variável "idade" que deve ser o valor 27.


    /* (l) */
    p4 = p4 - 2; // o ponteiro "p4" aponta para o endereço de memória correspondente ao antigo endereço apontado subtraido do valor 2 que é o endereço do vetor[0].
    idade = *p4; // a variável "idade" recebe o conteúdo para qual o ponteiro "p4" aponta.
    printf("%d \n", idade); // imprime o conteúdo da variável "idade" que deve ser o valor 31.

    /* (m) */
    p5 = &vetor[2] - 1; // O ponteiro "p5" recebe o endereço do vetor[2] subtraído de 1, que é o mesmo endereço do vetor[1].
    printf("%d \n", *p5); // imprime o conteúdo do endereço para qual o ponteiro "p5" aponta; o conteúdo deverá ser o valor 45.

    /* (n) */
    p5++; // soma com o valor 1, o endereço para qual o ponteiro "p5" aponta.
    printf("%d \n", *p5); // imprime o conteúdo do endereço para qual "p5" aponta; o conteúdo deverá ser 27.
    return(0);
}

/* Resultado da execução do programa:
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
