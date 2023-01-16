#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>


int main(){
    int i, x;
    double num1,num2,num3, media;
    printf("Quantos casos voce vai digitar?");
    scanf("%i", &x);

    for(i=0; i<x; i++){
        printf("Digite tres numeros:\n");
        scanf("%f %f  %f", &num1, &num2 , &num3);
        media = (num1 *2.0 + num2 * 3.0 + num3 * 5.0) / 10;
        printf("\nMEDIA = %.1lf\n", media);
    }
}