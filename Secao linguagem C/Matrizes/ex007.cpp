#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i, j, n, mat[10][10], soma;

    printf("Qual a ordem da matriz?");
    scanf("%i", &n);

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("ELEMENTO [%i] [%i]:", i,j);
            scanf("%i", &mat[i][j]);
        }
    }
   soma = 0;
    for(i=0; i<n; i++){
        for (j = 0; j < n; j++){
            soma = soma + mat[i][j];
        }
    }  

    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %i", soma);
}