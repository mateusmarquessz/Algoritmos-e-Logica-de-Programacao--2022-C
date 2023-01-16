#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i, n, contM, contH;
    float vetAltura[100], maior, menor, soma, media;
    char vetGenero[100];

    printf("Quantas pessoas serao digitadas?");
    scanf("%i", &n);

    for (i = 0; i < n; i++){
      printf("Altura da %ia pessoa", i+1);
      scanf("%f", &vetAltura[i]);
      printf("Genero da %ia pessoa", i+1);
      scanf("%s", &vetGenero[i]);
    }
    maior = vetAltura[0];
    for (i = 1; i < n; i++){
        if(vetAltura[i] > maior){
          maior = vetAltura[i];
        }
    }
    menor = vetAltura[0];
    for (i = 1; i < n; i++){
        if(vetAltura[i] <  menor){
          menor = vetAltura[i];
        }
    }
    printf("Menor altura = %f", menor);
    printf("Maior altura = %f", maior);

    soma = 0;
    contM = 0;
    for (i = 0; i < n; i++){
        if(vetGenero[i] = 'F'){
            soma = soma + vetAltura[i];
            contM = contM + 1;
        }
    }
    if(contM == 0){
        printf("Impossivel calcular a altura media das mulheres");
    } else{
        media = soma / contM;
        printf("Media das alturas das mulheres = %f \n", media);
    }

    contH = n - contM;
    printf("Numero de homens = %i", contH);
}