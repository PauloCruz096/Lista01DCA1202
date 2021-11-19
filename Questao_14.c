#include<stdio.h>
#include<stdlib.h>

int ordenador (const void *a, const void *b); //Declarando a função que vai servir de parâmetro para a função "qsort".

int main(){
    int  n=1, i, j;
    float aux, *x, *z, y=1.0;
    do{
        printf("Digite um número qualquer diferente de 0: ");
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
    qsort(x, (n-1), sizeof(float), ordenador); // Chama a função "qsort". Como parâmetros se tem um ponteiro "x", seu tamanho de memória alocada "n-1" e a função "ordenador" que irá comparar os elementos do array.
    for(i=0; i<(n-1); i++){
        printf("%f ", x[i]);
    }
    free(x);
    free(z);
}

int ordenador (const void *a, const void *b){ // como parâmetros dessa função temos dois ponteiros genéricos "a" e "b".
    if(*(float*)a > *(float*)b){ // Os ponteiros genéricos precisam ter um "tipo" referenciado (cast para float no caso) para poderem ser desreferenciados (*a e *b) e terem seu conteúdo comparado.
        return 1; // retorna o inteiro 1 para a função "qsort"  caso o conteúdo do bloco "a" seja maior que o do bloco "b". Ao retornar 1, a função "qsort" realiza a troca dos dois elementos.
    }else if (*(float*)a < *(float*)b){ //verifica se "a" é menor que "b" e retorna -1 caso seja verdade.
        return -1; // ao retornar -1, a função "qsort" não realiza a troca dos elementos.
    }else{
        return 0; // da mesma forma do -1, caso retorne 0, "qsort" não realiza a troca dos elementos.
    }
}
