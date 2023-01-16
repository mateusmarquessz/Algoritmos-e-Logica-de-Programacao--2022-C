#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i,j,m,n, mat[10][10];
    printf("Quantas linhas vai ter a matriz?");
    scanf("%i", &m);
     printf("Quantas Colunas vai ter a matriz?");
    scanf("%i", &n);

for(i = 0; i < m; i++){
     for(j = 0; j < n; j++){
        printf("Elementos: [%i,%i]\n", i, j);
        scanf("%i", &mat[i][j]);
    }
}

    printf("Matriz DIGITADA:");
for(i = 0; i < m; i++){
    for (j = 0; j < n; j++){
        printf("%i \n", mat[i][j]);
    }
}   
}