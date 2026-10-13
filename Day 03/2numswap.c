#include <stdio.h>

int main(){
    float a;
    float b;
    float c = 0;
    scanf("%f %f",&a, &b);
    c = a;
    a = b;
    b = c;
    printf("After swap: %g %g\n", a,b);
    return 0;
}
