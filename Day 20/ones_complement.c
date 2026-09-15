// Write a program to find the 1's complement of a binary number and print it.
#include <stdio.h>

int main(){
    long long binary, temp, place = 1;
    scanf("%lld", &binary);

    if(binary < 0){
        printf("Invalid binary number\n");
        return 0;
    }

    temp = binary;
    do{
        int digit = temp % 10;

        if(digit != 0 && digit != 1){
            printf("Invalid binary number\n");
            return 0;
        }

        temp /= 10;
    }while(temp > 0);

    temp = binary;
    while(temp >= 10){
        place *= 10;
        temp /= 10;
    }

    while(place > 0){
        int digit = binary / place;

        if(digit == 0){
            printf("1");
        }
        else{
            printf("0");
        }

        binary %= place;
        place /= 10;
    }

    printf("\n");
    return 0;
}
