#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i, x;
    printf("Digite um valor de X");
    scanf("%i", &x);
    for(i=1; i<x; i++){
         if(i %2 !=0){
            printf("%i \n", i);
        }
    }
}