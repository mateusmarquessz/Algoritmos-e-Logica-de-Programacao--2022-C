#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
    int senha;
    printf("Digite a senha:");
    scanf("%i", &senha);
         while(senha != 2002){
            printf("Senha Invalida! Tente novamente:");
            scanf("%i", &senha);
    }
        if(senha = 2002){
            printf("Acesso permitido!");
    }
}