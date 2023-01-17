#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,n, idade[100], menor=0;
    double altura[100], media,alturatotal=0, percentualMenores;
    string nome[100];

    cout << "Quantas pessoas serao digitadas?";
    cin >> n;

    for (i = 0; i < n; i++){
        cout << "Dados da" << i+1 << "pessoa: ";
        cout << "Nome: ";
        cin >> nome[i];
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];
    }
    for (i = 0; i < n; i++){
        media = altura[i] / n;
    }
    for (int i=0; i<n; i++) {
        if (idade[i] < 16) {
            menor++;
        }
        alturatotal = alturatotal + altura[i];
    }

    media = alturatotal / n;
    percentualMenores = ((double)menor / n) * 100.0;

    cout << fixed << setprecision(2);
    cout << endl << "Altura media: " << media << endl;
    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << percentualMenores << "%" << endl;

    return 0;
}