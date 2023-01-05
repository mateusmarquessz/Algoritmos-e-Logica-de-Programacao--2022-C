#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int x = 0, soma;

    printf("Digite um numero inteiro:");
    scanf("%i", &x);

    while(x != 0){
        if(x %2 ==0){
            soma = (5*x) + 20;
        } else {
            x = x + 1;
            soma = (5*x) + 20;
        }   
        printf("SOMA = %i\n", soma);

    printf("Digite um numero inteiro:");
    scanf("%i", &x);
    }
}