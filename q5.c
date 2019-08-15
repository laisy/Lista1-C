#include <stdio.h>
#include <stdlib.h>

//Dado um inteiro não-negativo n, determinar n!

int main(){
    int n;
    printf("Digite um inteiro n: %d\n");
    scanf("%d", &n);

    int contador = 0;
    int temp = n;

    while(temp >= 1){
        if(n%temp == 0){
          contador = contador + 1;
        }
        temp = temp - 1;
    }
    if(contador == 2){
        printf("O inteiro e um primo!" );
    }
    else{
        printf("O inteiro nao e um primo! ");
    }
    return 0;
}