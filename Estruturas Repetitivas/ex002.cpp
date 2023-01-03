#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int x, y;
    printf("Digite um numero");
    scanf("%i", &x);
    printf("Digite outro numero");
    scanf("%i", &y);

    while (x != y ){
        if(x < y){
            printf("CRESCENTE!\n");
        } else {
            printf("DECRESCENTE!\n");
        }
                printf("Digite um numero:");
                    scanf("%i, %i", &x, &y);
                printf("Digite outro numero");
                    scanf("%i", &y);
    }
}