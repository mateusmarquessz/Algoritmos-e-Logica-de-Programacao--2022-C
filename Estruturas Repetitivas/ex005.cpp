#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int x,y;
        printf("Digite os valor da coordenada X");
            scanf("%i", &x);
        printf("Digite os valor da coordenada Y");
            scanf("%i", &y);
        while(x != 0 && y != 0){

        
            if(x>0 && y>0){
                printf("Quadrante Q1\n");
            } else if(x < 0 && y > 0){
                printf("Quadrante Q2\n");
            } else if(x < 0 && y < 0){
                printf("Quadrante Q3\n");
            }else {
                printf("Quadrante Q4\n");
            }

        printf("Digite os valor da coordenada X");
            scanf("%i", &x);
        printf("Digite os valor da coordenada Y");
            scanf("%i", &y);
    }
}