#include<stdio.h>
#include<stdlib.h>

int ordenador (const void *a, const void *b); //Declarando a fun��o que vai servir de par�metro para a fun��o "qsort".

int main(){
    int  n=1, i, j;
    float aux, *x, *z, y=1.0;
    do{
        printf("Digite um n�mero qualquer diferente de 0: ");
        scanf("%f", &y);
        z = malloc((n)*sizeof(float));
        for(j=0; j<(n-1); j++){
            z[j] = x[j];
        }
        x = malloc((n)*sizeof(float));
        x[n-1] = y;
        for(j=0; j<(n-1); j++){
            x[j] = z[j];
        }
        n=n+1;
    }while (y!=0.0);
    qsort(x, (n-1), sizeof(float), ordenador); // Chama a fun��o "qsort". Como par�metros se tem um ponteiro "x", seu tamanho de mem�ria alocada "n-1" e a fun��o "ordenador" que ir� comparar os elementos do array.
    for(i=0; i<(n-1); i++){
        printf("%f ", x[i]);
    }
    free(x);
    free(z);
}

int ordenador (const void *a, const void *b){ // como par�metros dessa fun��o temos dois ponteiros gen�ricos "a" e "b".
    if(*(float*)a > *(float*)b){ // Os ponteiros gen�ricos precisam ter um "tipo" referenciado (cast para float no caso) para poderem ser desreferenciados (*a e *b) e terem seu conte�do comparado.
        return 1; // retorna o inteiro 1 para a fun��o "qsort"  caso o conte�do do bloco "a" seja maior que o do bloco "b". Ao retornar 1, a fun��o "qsort" realiza a troca dos dois elementos.
    }else if (*(float*)a < *(float*)b){ //verifica se "a" � menor que "b" e retorna -1 caso seja verdade.
        return -1; // ao retornar -1, a fun��o "qsort" n�o realiza a troca dos elementos.
    }else{
        return 0; // da mesma forma do -1, caso retorne 0, "qsort" n�o realiza a troca dos elementos.
    }
}
