#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i,j,n, mat[10][10], cont;
    float maior, maiorlinha[10];
    printf("Qual a ordem da matriz");
    scanf("%i", &n);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("ELEMENTO [%i] [%i]:", i,j);
            scanf("%i", &mat[i][j]);
        }
    }
     for (int i=0; i<n; i++) {
        maior = mat[i][0];
        for (int j=1; j<n; j++) {
            if (maior < mat[i][j]) {
                maior = mat[i][j];
            }
        }
        maiorlinha[i] = maior;
    }

    printf("MAIOR ELEMENTO DE CADA LINHA:\n");

    for (int i=0; i<n; i++) {
		printf("%d\n", maiorlinha[i]);
    }
}