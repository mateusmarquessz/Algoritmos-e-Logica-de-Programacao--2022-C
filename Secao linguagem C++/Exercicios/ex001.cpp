#include <bits/stdc++.h>

using namespace std;

int main(){
    double base, alt, area, peri, diag;
    area = 0;
    cout << "Base do retangulo: ";
    cin >> base;
    cout << "Altura do retangulo: ";
    cin >> alt;

    area = base * alt;
    peri = 2*(base + alt);
    diag = sqrt(pow(base, 2.0) + pow(alt, 2.0));
    cout << fixed << setprecision(4);
    cout << "AREA = "<< area << endl;
    cout << "PERIMETRO = " << peri << endl;
    cout << "DIAGONAL = " << diag << endl;
}