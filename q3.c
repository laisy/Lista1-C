#include <stdio.h>
#include <stdlib.h>

//Dados um inteiro x e um inteiro não-negativo n, calcular x*n

int main(){
    int x;
    int n;
    int y;
    int exp = 1;

    printf("Digite um inteiro x: \n");
    scanf("%d", &x);
    printf("Digite um inteiro nao-negativo n: \n");
    scanf("%d", &n);

    y = n;

    while (n>0){
        exp = exp * x;
        n--;
   }

    printf("%d",exp);


    return 0;
}
