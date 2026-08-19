// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main(){
    float a ,b;
    printf("Enter 2 numbers: ");
    scanf("%f %f", &a ,&b);
    float sum = a +b;
    float diff = a-b;
    float pro = a *b;
    printf("Sum: %g\n", sum);
    printf("Difference: %g\n", diff);
    printf("Product: %g\n", pro);
    if (b!= 0){
        float quo = a/b;
        printf("Quotient: %g\n", quo);
    }
    else{
        printf("cannot be divided by 0");
    }
    return 0;
}