#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int n, i;
    float vet[10];
    printf("Quantos numeros voce vai digitar?");
    scanf("%i", &n);

    for(i=0; i<n; i++){
        printf("Digite um numero:");
        scanf("%f", &vet[i]);
    }
    printf("Numeros Digitados:");

    for(i=0; i<n; i++){
        printf("%f\n", vet[i]);
    }
}