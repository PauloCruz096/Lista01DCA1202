#include<stdio.h>
#include<stdlib.h>

void multiplicaMatriz(int **A, int **B, int **C, int lA, int cA, int cB);

int main(){
    int **A, **B, **C;
    int lA, cA, cB;
    printf("Digite o tamanho da linha da matriz A: ");
    scanf("%d", &lA);
    printf("Digite o tamanho da coluna da matriz A (será igual a linha da matriz B): ");
    scanf("%d", &cA);
    printf("Digite o tamanho da coluna da matriz B: ");
    scanf("%d", &cB);
    A =  malloc(lA * sizeof(int));
    for(int i=0; i<lA; i++){
        A[i] = malloc(cA * sizeof(int));
    }
    B = malloc(cA * sizeof(int));
    for(int j=0; j<cA; j++){
        B[j] = malloc(cB * sizeof(int));
    }
    C = malloc(lA * sizeof(int));
    for(int k=0; k<lA; k++){
        C[k] = malloc(cB * sizeof(int));
    }
    printf("Digite os valores da matriz A: ");
    for(int l=0; l<lA; l++){
        printf("Linha %d \n", l+1);
        for(int m=0; m<cA; m++){
            scanf("%d ", &A[l][m]);
        }
    }
    printf("Digite os valores da matriz B: ");
    for(int n=0; n<cA; n++){
        printf("Linha %d \n", n+1);
        for(int o=0; o<cB; o++){
            scanf("%d ", &B[n][o]);
        }
    }
    multiplicaMatriz(A, B, C, lA, cA, cB);
    printf("\nMatriz A: ");
    for(int al=0; al<lA; al++){
        printf("\n");
        for(int ac=0; ac<cA; ac++){
            printf("%d ", A[al][ac]);
        }
    }
    printf("\nMatriz B: ");
    for(int bl=0; bl<cA; bl++){
        printf("\n");
        for(int bc=0; bc<cB; bc++){
            printf("%d ", B[bl][bc]);
        }
    }
    printf("\nMatriz C: ");
    for(int cl=0; cl<lA; cl++){
        printf("\n");
        for(int cc=0; cc<cB; cc++){
            printf("%d ", C[cl][cc]);
        }
    }
    for(int a=0; a<lA; a++){
        free(A[a]);
    }free(A);
    for(int b=0; b<cA; b++){
        free(B[b]);
    }free(B);
    for(int c=0; c<lA; c++){
        free(C[c]);
    }free(C);
}

void multiplicaMatriz(int **A, int **B, int **C, int lA, int cA, int cB){
    for(int i=0; i<lA; i++){
        for(int j=0; j<cB; j++){
            for(int k=0; k<cA; k++){
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
            }
        }
    }

}
