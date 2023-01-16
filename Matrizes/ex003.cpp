#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i,j,m,n;
    double mat[10][10], vet[10], somalinha;
    printf("Quantas linhas vai ter a matriz?");
    scanf("%i", &m);
     printf("Quantas Colunas vai ter a matriz?");
    scanf("%i", &n);

    for (i = 0; i < m; i++){
         printf("Digite os elementos da %ia. linha:", i+1);
        for (j = 0; j < n; j++){
            scanf("%i", &mat[i][j]);
        }
    }
    for(i=0; i<m; i++){
        somalinha = 0;
        for (j = 0; j < n; j++){
            somalinha = somalinha + mat[i][j];
        }
        vet[i] = somalinha;
    }  

    printf("VETOR GERADO:");

    for (i = 0; i < m; i++){
        printf("%i", vet[i]);
    }
      
}