#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i, n, qtePares, vet[10];

    printf("Quantos numeros voce vai digitar:");
    scanf("%i", &n);

    for(i=0; i<n; i++){
        printf("Digite um numero:");
        scanf("%i", &vet[i]);
    }
    qtePares = 0;

    printf("NUMEROS PARES:");
    for(i=0; i<n; i++){
        if(vet[i] % 2 == 0){
            printf("%i", vet[i]);
            qtePares++;
        }
    }
    printf("\nQUANTIDADE DE PARES =", qtePares );
    
}