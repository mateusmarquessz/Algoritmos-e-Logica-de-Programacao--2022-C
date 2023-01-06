#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i, x, soma, n;
    printf("Quantos numeros serao digitados?");
    scanf("%i", &x);
    soma = 0 ;
    for(i = 0; i<x; i ++){
        printf("Digite um numero:");
        scanf("%i", &n);
        soma = soma + n;
    }
    printf("Soma = %i", soma);
}