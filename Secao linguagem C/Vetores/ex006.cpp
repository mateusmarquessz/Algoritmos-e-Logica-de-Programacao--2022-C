#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i, n, vet[100], maior, posMaior;
    printf("Quantos numeros voce vai digitar?");
    scanf("%i", &n);

    for(i=0; i<n; i++){
        printf("Digite um numero:");
        scanf("%i", &vet[i]);
    }
    maior = vet[0];
    posMaior = 0;
    for(i=0; i<n; i++){
        if(vet[i] > maior){
            maior = vet [i];
            posMaior = i;
        }
    }
    printf("MAIOR VALOR = %i", maior);
    printf("\nPOSICAO DO MAIOR VALOR = %i", posMaior);

}