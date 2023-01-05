#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int alcool = 0, gasolina = 0, diesel = 0, fim;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar:"); /* Sempre comecar com a pergunta antes*/
    scanf("%i", &fim);

    while(fim != 4){
      switch (fim){
    case 1:
        alcool = alcool + 1;
    break;

    case 2:
        gasolina = gasolina + 1;
    break;

    case 3:
        diesel = diesel + 1;
    break;
    default:
    break;
      }
        printf("Informe um codigo (1, 2, 3) ou 4 para parar:");
        scanf("%i", &fim);
    }
    printf("MUITO OBRIGADO \n Alcool: %i \n Gasolina: %i \n Diesel: %i", alcool, gasolina, diesel);
    }