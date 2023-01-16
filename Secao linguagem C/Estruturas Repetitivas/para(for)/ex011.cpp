#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i, n, cobaias, totalratos = 0, totalcoelhos = 0, totalsapos = 0, totalCobaia;
    char tipoCobaia;
    float pRatos, pSapos, pCoelhos;
    printf("Quantos casos de tese serao digitados?");
    scanf("%i", &n);

    for(i=0; i<n; i++){
        printf("Quantidades de cobaias:");
        scanf("%i", &cobaias);
        printf("Tipo de cobaia:");
        scanf("%s", &tipoCobaia);

        if(tipoCobaia == 'r'){
            totalratos = totalratos + cobaias;
        } else if(tipoCobaia == 'c'){
            totalcoelhos = totalcoelhos + cobaias;
        } else if(tipoCobaia == 's'){
            totalsapos = totalsapos + cobaias;
        }
    }
            totalCobaia = totalcoelhos + totalratos + totalsapos;
            pRatos = totalratos / totalCobaia * 100;
            pSapos = totalsapos / totalCobaia * 100;
            pCoelhos = totalcoelhos / totalCobaia * 100;

    printf("\nRELATORIO FINAL\n");
    printf("Total:%i de cobaias\n", totalCobaia);
    printf("Total de coelhos:%i \n",totalcoelhos);
    printf("Total de ratos:%i \n", totalratos);
    printf("Total de sapos:%i \n",totalsapos);
    printf("Percentual de coelhos:%i \n", pCoelhos);
    printf("Percentual de ratos:%i \n",pRatos);
    printf("Percentual de sapos:%i \n",pSapos);
}