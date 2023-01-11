#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    float C,F;
    char reap;

    printf("Digite a temperatura em Celsius:");
    scanf("%f", &C);
    F = 9 * C / 5 + 32;
    printf("Equivalente em Fahrenheit: %f", F);
}