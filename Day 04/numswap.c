#include <stdio.h>

int main(){
    float a;
    float b;
    scanf("%f %f", &a , &b);
    a = a * b;
    b = a/b;
    a = a/b;
    printf("%.2f %.2f", a , b);
    return 0;
}