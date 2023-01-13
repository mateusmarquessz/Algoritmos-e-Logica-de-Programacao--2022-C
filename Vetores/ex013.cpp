#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int i, n;
    char produto[100];
    float precoCompra[100], precoVenda[100];

    printf("Serao digitados dados de quantos produtos?");
    scanf("%i", &n);

    for(i = 0; i<n; i++){
        printf("Produto %i:", i+1);
        printf("Nome");
        scanf("%s", produto[i]);
        printf("Preco de compra");
        scanf("%s", precoCompra[i]);
        printf("Preco de venda");
        scanf("%s", precoVenda[i]);
    }
    
}