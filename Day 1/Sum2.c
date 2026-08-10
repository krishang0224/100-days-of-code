//Write a program to input two numbers and display their sum.


#include <stdio.h>

int main(){
    printf("Enter two numbers:");
    float a,b; 
    scanf("%f %f", &a, &b);
    float sum = a + b;
    printf("sum %g\n" ,sum);
    return 0; 
}