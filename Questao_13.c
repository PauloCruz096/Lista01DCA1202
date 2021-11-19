#include<stdio.h>
#include<stdlib.h>

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
    }while(y!=0.0);
    for (j=0; j<(n-1); j++){
        for(i=j+1; i<(n-1); i++){
            if(x[j] > x[i]){
                aux = x[j];
                x[j] = x[i];
                x[i] = aux;
            }
        }
    }
    for(i=0; i<(n-1); i++){
        printf("%f ", x[i]);
    }
    free(x);
    free(z);
}
