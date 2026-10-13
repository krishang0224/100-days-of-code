// Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main(){
    long long number;
    unsigned long long digits;
    int count[10] = {0};
    scanf("%lld", &number);
    digits = number < 0 ? -(unsigned long long)number : (unsigned long long)number;
    if(digits == 0){
        count[0] = 1;
    }
    while(digits > 0){
        int digit = digits % 10;
        count[digit]++;
        digits /= 10;
    }
    int most_frequent = 0;
    for(int i = 1; i < 10; i++){
        if(count[i] > count[most_frequent]){
            most_frequent = i;
        }
    }
    printf("%d\n", most_frequent);
    return 0;
}
