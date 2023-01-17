#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,x,y, troca, soma;

    cout << "Digite dois numeros:" << endl;
    cin >> x >> y;
     if(x>y){
        troca = x; /* trocando valores das variaveis*/
        x = y;
        y = troca;
    }
 soma = 0;
    for(i = x+1; i<y-1; i++)/* Estrutura de repeticao para somar os impares*/
    { 
         if(i %2 !=0){
            soma = soma + i;
        }
    }
    cout << "SOMA DOS IMPARES = " << soma; 
}
