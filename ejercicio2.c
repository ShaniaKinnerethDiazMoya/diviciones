#include <stdio.h>
int main(){
    double a=1, b=2, c=4, d=5;
    double x1, x2, x3, x4;

    x1=a/c;
    x2=b-x1;
    x3=b/x2+1;
    x4=(b/a)/(a/x3)+d;

    printf("El resultado es: %f\n", x4);

    return 0;
}