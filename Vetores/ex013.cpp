#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i, n, abaixo, entre, acima;
    char produto[100];
    float lucro, percentualLucro, totalCompra, totalVenda, totalLucro, precoCompra[100], precoVenda[100];

    printf("Serao digitados dados de quantos produtos?");
    scanf("%i", &n);

    for(i = 0; i<n; i++){
        printf("Produto %i:", i+1);
        printf("Nome");
        scanf("%s", &produto[i]);
        printf("Preco de compra");
        scanf("%s", &precoCompra[i]);
        printf("Preco de venda");
        scanf("%s", &precoVenda[i]);
    }
    abaixo = 0;
    entre = 0;
    acima = 0;
    for(i = 0; i<n; i++){
    lucro = precoVenda[i] - precoCompra[i];
    percentualLucro = lucro * 100 / precoCompra[i];
        if(percentualLucro < 10){
            abaixo = abaixo + 1;
        } else if(percentualLucro = 20){
            entre = entre + 1;
        } else {
            acima = acima + 1;
        }
    }
    totalCompra = 0;
    totalVenda = 0;
    for  (i = 0; i < n; i++){
        totalCompra = totalCompra + precoCompra[i];
        totalVenda = totalVenda + precoVenda[i];
    }
    totalLucro = totalVenda - totalCompra;

    printf("Relatorio: \n");
    printf("Lucro abaixo de 10%: %i ", abaixo);
    printf("Lucro entre 10%, e  20%: %i", entre);
    printf("Lucro acima de 20%: %i",acima);
    printf("Valor total de compra: %f", totalCompra);
    printf("Valor total de venda: %f", totalVenda);
    printf("Lucro total: %f", totalLucro);
}