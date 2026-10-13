#include <stdio.h>

int main(){
    float C;
    scanf("%f", &C);
    float F = C * (9.0/5.0) + 32;
    printf("Fahrenheit=%g\n",F);
    return 0;
}
