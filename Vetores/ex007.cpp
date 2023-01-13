#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i, n, vetA[100], vetB[100], vetC[100];

    printf("Quantos valores vai ter cada vetor?");
    scanf("%i", &n);

    for(i=0; i<2; i++){
        for(i=0; i<n; i++){
            printf("Digite os valores do vetor A:");
            scanf("%i", &vetA[i]);
        }
         for(i=0; i<n; i++){
            printf("Digite os valores do vetor B:");
            scanf("%i", &vetB[i]);
        }
    }
    vetC = vetA + vetB;
}