#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i, n, vet[100], contPares, soma;
    float media;
    printf("Quantos valores vai ter o vetor?");
    scanf("%i", &n);

    for(i=0; i<n; i++){
        printf("Digite um numero:");
        scanf("%i", &vet[i]);
    }
    soma = 0;
    contPares = 0;
    for(i=0; i<n; i++){
        if(vet[i]%2 ==0){
            soma = soma + vet[i];
            contPares++;
        }
    }
    if(contPares == 0){
        printf("NENHUM NUMERO PAR");
    }else{
         media = soma / contPares;
        printf("MEDIA DOS PARES = %.1lf", media);
    }
}