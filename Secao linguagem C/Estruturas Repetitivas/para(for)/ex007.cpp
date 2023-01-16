#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>


int main(){
    int i, x, y;
    printf("Quantos numeros voce vai digitar?");
    scanf("%i", &x);
    for(i=0;i<x;i++){
        printf("Digite um numero:");
        scanf("%i", &y);
        if(y < 0 && y %2 !=0){
            printf("IMPAR NEGATIVO\n");
        } else if(y < 0 && y %2 ==0){
            printf("PAR NEGATIVO\n");
        }

        if(y > 0 && y %2 !=0){
            printf("IMPAR\n");
        } else if(y > 0 && y %2 ==0){
            printf("PAR\n");
        }

        if(y==0){
            printf("NULL\n");
        } 
    }
}
