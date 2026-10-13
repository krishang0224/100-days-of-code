// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int sum = a+b;
    int diff = a-b;
    int pro = a*b;
    if (b!= 0){
        int quo = a/b;
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, pro, quo);
    }
    else{
        printf("cannot be divided by 0");
    }
    return 0;
}
