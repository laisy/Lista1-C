#include <stdio.h>
#include <stdlib.h>

//Dado um natural n, determine o número harmônico Hn definido por:

int main(){
    int n;
    float k;
    float h = 0;
    float num;

    printf("Digite um natural n: \n");
    scanf("%d", &n);

    for(k = 1; k <= n; k++){
        num = 1/k;
        h = h + num;
        }

    printf("O numero harmonico e: %0.2f", h);


    return 0;
}
