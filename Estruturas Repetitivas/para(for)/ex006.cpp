#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>


int main(){
    int i, x, y, fora, dentro;
    fora = 0;
    dentro = 0;
    printf("Quantos numeros voce vai digitar?");
    scanf("%i", &x);

    for(i=0; i<x; i++){
        printf("Digite um numero: \n");
        scanf("%i", &y);

    if(y >= 10 && y<=20){
        dentro = dentro + 1;
    } else{
        fora = fora + 1;
    }
    }
    printf("Dentro: %i \n", dentro);
    printf("Fora: %i", fora);
}