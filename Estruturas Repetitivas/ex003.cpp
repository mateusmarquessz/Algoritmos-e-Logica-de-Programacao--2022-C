#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int idade, soma, cont;
    float media;
    soma = 0;
    cont = 0;
    printf("Digite as idades:");
    scanf("%i", &idade);
    while(idade >= 0){
        soma = soma + idade;
        cont = cont + 1;
        scanf("%i", &idade);
    }

    if(cont == 0){
        printf("IMPOSSIVEL CALCULAR");
    } else {
    media = soma / cont;
    printf("Media = %f", media);
    }
}