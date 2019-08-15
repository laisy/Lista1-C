#include <stdio.h>
#include <stdlib.h>

//Dada uma sequência de números inteiros não-nulos, seguida por 0, imprimir seus
//quadrados. O programa só deve parar de solicitar novas entradas do usuário quando o
//algarismo ‘0’ for digitado.

int main(){
   int num = 1;
    int quadrado;

  while(num != 0){
    printf("Digite um numero: \n");
    scanf("%d", &num);
    quadrado = num * num;
    if(num>0){
        printf("O quadrado do numero e: %d\n", quadrado);
    }
  }

    return 0;
}
