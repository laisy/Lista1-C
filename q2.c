#include <stdio.h>
#include <stdlib.h>

//Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.

int main(){
   int n;
   int soma;

   printf("Digite um inteiro n: ");
   scanf("%d", &n);

   while(n>=0){
    soma = soma + n;
    n = n - 1;
   }
   printf("A soma foi de: %d", soma);

    return 0;
}
