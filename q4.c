#include <stdio.h>
#include <stdlib.h>

//Dado um inteiro não-negativo n, determinar n!

int main(){
    int n;
    int i;

    printf("Digite um inteiro n: \n");
    scanf("%d", &n);

   for(i = 1; n > 1; n--){
        i = i * n;
    }
    printf("Fatorial de n: %d\n", i);

    return 0;
}
