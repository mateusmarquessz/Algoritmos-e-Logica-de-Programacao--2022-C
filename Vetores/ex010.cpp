#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>


int main(){
    int i, n, vetIdade[100],maior, posMaior;
    char vetNome[100];

    printf("Quantas pessoas voce vai digitar?");
    scanf("%i", &n);

    for (i = 0; i < n; i++){
        printf("Dados da %i a pessoa:\n", i+1);
        printf("Nome:");
        scanf("%s", &vetNome[i]);
        printf("Idade:");
        scanf("%i", &vetIdade[i]);
    }
    maior = vetIdade[0];
    posMaior = 0;
    for (i = 1; i < n; i++){
        if(vetIdade[i] > maior){
            maior = vetIdade[i];
            posMaior = i;
        }
    }
    printf("PESSOA MAIS VELHA = %s", vetNome[posMaior]);
}