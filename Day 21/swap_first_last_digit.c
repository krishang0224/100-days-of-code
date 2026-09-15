// Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main(){
    long long n, first, last, middle, result, place = 1;
    scanf("%lld", &n);

    if(n < 0){
        printf("Invalid input\n");
        return 0;
    }

    if(n < 10){
        printf("%lld\n", n);
        return 0;
    }

    long long temp = n;
    while(temp >= 10){
        temp /= 10;
        place *= 10;
    }

    first = n / place;
    last = n % 10;
    middle = (n % place) / 10;
    result = last * place + middle * 10 + first;

    printf("%lld\n", result);
    return 0;
}
