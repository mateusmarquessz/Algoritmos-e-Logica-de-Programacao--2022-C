#include <bits/stdc++.h>

using namespace std;


int main(){
    int i, j, n, mat[10][10], soma, cont;

    cout << "Qual a ordem da matriz?";
    cin >> n;

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << "ELEMENTO [" << i << "," << j << "] :";
            cin >> mat [i][j];
        }
    }
   soma = 0;
    for(i=0; i<n; i++){
        for (j = 0; j < n; j++){
            soma = soma + mat[i][j];
        }
    }  
     for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
           if(mat[i][j]<0){
            cont = cont +1;
           }
        }
    }
    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL" << soma;

    cout << "Quantidade de negativos " << cont;
}