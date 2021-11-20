#include<stdio.h>
#include<stdlib.h>

void somavetor(int *x, int *y, int *z, int n);

int main(){
    int *x, *y, *z, n=1;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    x = malloc((n)*sizeof(int));
    printf("Digite os valores do primeiro vetor: ");
    for(int i=0; i<n; i++){
        scanf("%d", &x[i]);
    }
    y = malloc((n)*sizeof(int));
    printf("Digite os valores do segundo vetor: ");
    for(int j=0; j<n; j++){
        scanf("%d", &y[j]);
    }
    z = malloc((n)*sizeof(int));
    somavetor (x, y, z, n);
    printf("Soma dos vetores: ");
    for(int k=0; k<n; k++){
        printf("%d, ", z[k]);
    }
    free(x);
    free(y);
    free(z);
}

void somavetor(int *x, int *y, int *z, int n){
    for(int i=0; i<n; i++){
        z[i] = x[i] + y[i];
    }
}
