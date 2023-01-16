#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i, x, y , troca, soma;
    printf("Digite o valor de X");
        scanf("%i", &x);
    printf("Digite o valor de Y");
        scanf("%i", &y);
    if(x>y){
        troca = x; /* trocando valores das variaveis*/
        x = y;
        y = troca;
    }
 soma = 0;
    for(i = x+1; i<y-1; i++)/* Estrutura de repeticao para somar os impares*/
    { 
         if(i %2 !=0){
            soma = soma + i;
        }
    }
    printf("SOMA DOS IMPARES = %i", soma);
}