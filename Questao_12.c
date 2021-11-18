#include<stdio.h>

/* Ponteiros para funções nada mais é do que criar um ou mais ponteiros
   que apontem para uma função desejada feita em algum lugar do código */

typedef int TipoFuncao();

int quadrado_0(){
    return 0;
}
int quadrado_1(){
	return 1;
}
int quadrado_2(){
	return 4;
}
int quadrado_3(){
    return 9;
}
int quadrado_4(){
    return 16;
}
int quadrado_5(){
    return 25;
}
int quadrado_6(){
    return 36;
}
int quadrado_7(){
    return 49;
}
int quadrado_8(){
    return 64;
}
int quadrado_9(){
    return 81;
}

int main(){
	int opcao, retorno;
	TipoFuncao *ptrF;
    printf("Digite sua opcao(1,2,3,4,5,6,7,8,9) :");
    scanf("%d", &opcao);
    switch(opcao){
        case 0:
            ptrF = quadrado_0;
            break;
        case 1:
            ptrF = quadrado_1;
            break;
        case 2:
            ptrF = quadrado_2;
            break;
        case 3:
            ptrF = quadrado_3;
            break;
        case 4:
            ptrF = quadrado_4;
            break;
        case 5:
            ptrF = quadrado_5;
            break;
        case 6:
            ptrF = quadrado_6;
            break;
        case 7:
            ptrF = quadrado_7;
            break;
        case 8:
            ptrF = quadrado_8;
            break;
        case 9:
            ptrF = quadrado_9;
            break;
    }
		retorno = (*ptrF)();
		printf ("Quadrado: %d\n\n", retorno);
}
