#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>


int main(){
    int i, x;
    float numerador, denominador, resultado;
    printf("Quantos casos voce vai digitar?");
    scanf("%i", &x);
    for(i=0;i<x;i++){
        printf("Entre com o numerador:");
        scanf("%i", &numerador);    
        printf("Entre com o demoninador:");
        scanf("%i", &denominador);
        if(denominador == 0){
            printf("DIVISAO IMPOSSIVEL\n");
        } else{
            resultado = numerador / denominador;
            printf("DIVISAO = %f \n", resultado);
        }
        
    }
}