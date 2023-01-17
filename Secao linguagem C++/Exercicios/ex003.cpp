#include <bits/stdc++.h>

using namespace std;

int main(){
    int num1,num2,num3, menor;

    cout << "Primeiro Valor: ";
    cin >> num1;
    cout << "Segundo Valor: ";
    cin >> num2;
    cout << "Terceiro Valor: ";
    cin >> num3;

    if(num1  < num2 && num1< num3){
        menor = num1;
    } else if (num2 < num1 && num2 < num3){
        menor = num2;
    } else {
        menor = num3;
    }
    cout << "Menor = " << menor;
}