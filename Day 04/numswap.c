#include <stdio.h>

int main(){
    float a;
    float b;
    scanf("%f %f", &a , &b);
    a = a * b;
    b = a/b;
    printf("%f %f", a , b);
    return 0;
}