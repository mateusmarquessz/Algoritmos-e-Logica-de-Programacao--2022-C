#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i, n, produto;
    printf("Deseja a tabuada para qual valor?:");
    scanf("%i", &n);
    for( i=1 ; i < 11; i++ ){
      produto =  (n * i);
     printf("%i x %i = %i \n", n, i, produto);
    }
}