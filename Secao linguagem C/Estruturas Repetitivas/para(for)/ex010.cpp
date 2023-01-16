#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i, n, fat;
    printf("Digite um numero natural!");
    scanf("%i", &n);
    for(i=n; i>0; i--){
        fat = fat * i;
    }
    printf("FATORIAL = %i", fat);
}