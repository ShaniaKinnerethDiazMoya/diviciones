#include <stdio.h>

int main(){
    double a=1, b=3, c=5, d=30, e=23, x;

    x=(a/b)+(b/c)+((a/d)/(e/d));

    printf("El resultado es: %f\n", x);

    return 0;

}