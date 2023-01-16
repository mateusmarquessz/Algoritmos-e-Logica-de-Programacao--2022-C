#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>


int main(){
    int i,j,n, mat[10][10], cont;
    printf("Qual a ordem da matriz");
    scanf("%i", &n);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("ELEMENTO [%i] [%i]:", i,j);
            scanf("%i", &mat[i][j]);
        }
    }
    printf("Diagonal principal");
    for (i = 0; i < n; i++){
        printf("%i \n", mat[i][i]);
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
           if(mat[i][j]<0){
            cont = cont +1;
           }
        }
    }
    printf("Quantidade de negativos %i", cont);
}