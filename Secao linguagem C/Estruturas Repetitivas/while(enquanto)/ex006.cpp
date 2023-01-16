#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    float nota1,nota2, media;
    printf("Digite a primeira nota");
        scanf("%f", &nota1);
    while(nota1 < 0.10 || nota1 > 10){
            printf("Valor invalido!Tente novamente:\n");
            scanf("%f", &nota1);

    }
   printf("Digite a segunda nota");
        scanf("%f", &nota2);

    while(nota2 < 0.10 || nota2 > 10){

            printf("Valor invalido!Tente novamente:\n");
            scanf("%f", &nota2);
    }
    media = (nota1 + nota2) / 2;
    printf("Media:%f", media);
}