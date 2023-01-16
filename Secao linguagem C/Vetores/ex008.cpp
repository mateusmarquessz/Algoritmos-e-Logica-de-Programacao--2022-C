#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i, n;
    float vet[100], media, soma;

        printf("Quantos elementos vai ter o vetor?");
        scanf("%i", &n);

        for( i=0; i<n; i++ ){
            printf("Digite um numero:");
            scanf("%f", &vet[i]);
        }
    
    soma = 0;
    for ( i = 0; i < n ; i++){
        soma = soma + vet[i];
    }
    media = soma / n;
    printf("MEDIA DO VETOR = %f", media);
    printf("\nELEMENTOS ABAIXO DA MEDIA\n");
    for ( i = 0; i < n; i++){
        if(vet[i] < media){
            printf("%.1lf\n", vet[i]);
        }
    }
    
}