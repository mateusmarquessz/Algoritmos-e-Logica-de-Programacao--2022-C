#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    float C,F;
    char resp;

    do{
            printf("Digite a temperatura em Celsius:");
            scanf("%f", &C);
            F = 9 * C / 5 + 32;
            printf("Equivalente em Fahrenheit: %f \n", F);
            printf("Deseja repetir (s/n)");
            scanf("%s", &resp);  
    } while ( resp == 's');
}