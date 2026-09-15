// Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main(){
    int n, original, digits = 0;
    long long sum = 0;
    scanf("%d", &n);

    if(n < 0){
        printf("Not Armstrong\n");
        return 0;
    }

    original = n;
    int temp = n;

    if(temp == 0){
        digits = 1;
    }

    while(temp > 0){
        digits++;
        temp /= 10;
    }

    temp = n;
    while(temp > 0){
        int digit = temp % 10;
        long long power = 1;

        for(int i = 1; i <= digits; i++){
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    if(sum == original){
        printf("Armstrong\n");
    }
    else{
        printf("Not Armstrong\n");
    }

    return 0;
}
