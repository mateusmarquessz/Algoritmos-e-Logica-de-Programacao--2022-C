#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;

    cout << "Digite dois numeros:" << endl;
    cin >> a >> b;

    while(a!=b){
        if(a<b){
            cout << "Descrente"<< endl;
        } else {
            cout << "Crescente" << endl;
        }
        cout << "Digite dois numeros:" << endl;
        cin >> a >> b;
    }
    return 0 ;
}