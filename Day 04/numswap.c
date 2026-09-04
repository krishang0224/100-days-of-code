#include <stdio.h>

int main(){
    float a;
    float b;
    scanf("%f %f", &a , &b);
    float temp = a;
    a = b;
    b = temp;
    printf("%.2f %.2f", a , b);
    return 0;
}
