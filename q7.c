#include <stdio.h>
#include <stdlib.h>
/*7.Considere o conjunto H = H1 U H2 de pontos reais, onde:
H1 = {(x, y)| x <= 0, y <= 0, y + x**2 + 2x - 3 <= 0}
H2 = {(x, y)| x >= 0, y + x**2 - 2x - 3 <= 0}
Faça um programa que lê uma sequência de n pontos reais (x,y) e verifica se cada ponto
pertence ou não ao conjunto H. obs.: o primeiro dado recebido pelo programa deve ser o
valor de n. Em seguida, recebe-se n valores para x e para y. Por fim, n saídas indicarão se
cada um dos pontos pertence ou não ao conjunto H. */

int main(){

    int n, i, x, y;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int H1, H2;

    for(i=0; i<n; i++){
        printf("Digite o valor de x: ");
        scanf("%d", &x);
        printf("Digite o valor de y: ");
        scanf("%d", &y);
        if(x<=0 && y<=0){
            H1 = y + (x*x) + (2*x) - 3;
            if(H1 <=0){
            printf("(%d, %d) pertencem a H1, portanto pertencem ao conjunto H! \n", x, y);
            }
            else{
                printf("(%d, %d) nao pertencem ao conjunto H! \n", x, y);
            }
        }
       else if(x>=0){
            H2 = y + (x*x) - (2*x) - 3;
            if(H2<=0){
            printf("(%d, %d) pertencem ao conjunto H2, portanto pertencem ao conjunto H! \n", x, y);
            }
            else{
                printf("(%d, %d) nao pertencem ao conjunto H! \n", x, y);
            }
        }
        else{
            printf("(%d, %d) nao pertencem ao conjunto H! \n", x, y);
        }

    }

    return 0;
}
