#include <stdio.h>

int main(){
    float a;
    float b;
    float c = 0;
    scanf("%f %f",&a, &b);
    c = a;
    a = b;
    b = c;
    printf("%f %f", a ,b);
    return 0;
}