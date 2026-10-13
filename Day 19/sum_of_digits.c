// Write a program to find the sum of digits of a number.
#include <stdio.h>

int main(){
    long long n, sum = 0;
    scanf("%lld", &n);
    unsigned long long digits = n < 0 ? -(unsigned long long)n : (unsigned long long)n;
    while(digits > 0){
        sum += digits % 10;
        digits /= 10;
    }
    printf("%lld\n", sum);
    return 0;
}
