#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i,n, soma, cont, vetIdade[100];
    char vetNome[10];
    float media, porcentagem, vetAltura[100];

    printf("Quantas pessoas serao digitadas?");
    scanf("%i", &n);
    for(i=0; i<n; i++){
        printf("Dados da %ia pessoa\n", i+1);
        printf("Nome:");
        scanf("%s", &vetNome[i]);
        printf("Idade:");
        scanf("%i", &vetIdade[i]);
        printf("Altura");
        scanf("%f", &vetAltura[i]);
    }    
    
    soma = 0;
    for(i=0; i<n; n++){
        soma = soma + vetAltura[i];
    }
    media = soma / n;
    printf("Altura media:%.1lf \n", media);

    cont = 0;
    for(i=0; i<n; i++){
        if(vetIdade[i] < 16){
            cont++;
        }
    }
    porcentagem = cont * 100 / n;

    printf("Pessoas com menos de 16 anos:%.1lf %", porcentagem);

    for(i=0; i<n; n++){
        if(vetIdade[i] < 16){
            printf("%s", vetNome);
        }
    }
}