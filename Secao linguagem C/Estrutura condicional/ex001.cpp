#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    float  nota1, nota2, total;
    printf("Digite sua primeira nota");
        scanf("%f", &nota1);
    printf("Digite sua segunda nota");
        scanf("%f", &nota2);
    total = nota1 + nota2;

    if(total < 60){
        printf("reprovado");
    } else {
        printf("Aprovado");
    }
}