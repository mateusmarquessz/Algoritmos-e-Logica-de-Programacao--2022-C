#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>


int main(){
    float a,b,c, x1,x2, delta;
    printf("Digite valor do coeficiente A");
        scanf("%f", &a);
    printf("Digite valor do coeficiente B");
        scanf("%f", &b);
    printf("Digite valor do coeficiente C");
        scanf("%f", &c);
    delta = b*b - 4*a*c;
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);

    if(a== 0 || delta < 0){
        printf("Esta esquacao nao possui raizes");
    } else {
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);
    printf("X1 = %f", x1);
    printf("X2 = %f", x2);

    }
}