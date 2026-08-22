#include <stdio.h>

int main(){
    float C;
    printf("Enter temperature in C: ");
    scanf("%f", &C);
    float F = C * (9.0/5.0) + 32;
    printf("%.2f",F);
    return 0;
}