#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i,j,m,n;
    printf("Quantas linhas vai ter a matriz?");
    scanf("%i", &m);
     printf("Quantas Colunas vai ter a matriz?");
    scanf("%i", &n);

    int mata[m][n], matb[m][n], matc[m][n];

    printf("Digite os valores da matriz A:");
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%i", &mata[i][j]);
        }
    }
printf("Digite os valores da matriz B:");
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%i", &matb[i][j]);
        }
    }

    for(i=0; i<m; i++){
        for (j = 0; j < n; j++){
            matc[i][j] = mata[i][j] + matb[i][j];
        }
    }  

    printf("MATRIZ SOMA:");
for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
        printf("%i", matc[i][j]);
    }
    printf("\n");
   }   
}