#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i, n;
    float vet[10], soma , media;
    printf("Quantos numeros voce vai digitar?");
    scanf("%i", &n);

    for(i=0; i<n; i++){
        printf("Digite um numero:");
        scanf("%f", &vet[i]);
    }
    soma = 0;
    for(i=0; i<n; i++){
        soma = soma + vet [i];
    }
    media = soma / n;

    printf("Valores =");
    for(i=0; i< n; i++){
        printf("%.1lf ", vet[i]);
    }
        printf("\nSoma = %.1lf", soma);
        printf("\nMedia = %.1lf", media);
}