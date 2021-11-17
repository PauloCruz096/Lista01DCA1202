#include <stdio.h>
int main(void){
    char x1[4];
    int i;
    for(i=1;i<4;i++){
        printf("%d ",x1+i);
    }
    printf("\n");
    int x2[4];
    for(i=1;i<4;i++){
        printf("%d ",x2+i);
    }
    printf("\n");
    float x3[4];
    for(i=1;i<4;i++){
        printf("%d ",x3+i);
    }
    printf("\n");
    double x4[4];
    for(i=1;i<4;i++){
        printf("%d ",x4+i);
    }
}
