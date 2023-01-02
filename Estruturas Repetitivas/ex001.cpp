#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int num1, soma;
    printf("Digite um numero inteiro");
    scanf("%i", &num1);
    soma = 0; /* declarar valor da soma, para quando o 'enquanto adicionar ++'*/
    while(num1 != 0){ /*diferente de 0 !=*/
    soma = soma + num1;
        printf("Digite outro numero");
        scanf("%i", &num1);
    }
    printf("%i", soma); /* Resultado*/
}