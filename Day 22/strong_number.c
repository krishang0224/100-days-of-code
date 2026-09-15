// Write a program to check if a number is a strong number.
#include <stdio.h>

int main(){
    int n, original, sum = 0;
    scanf("%d", &n);

    if(n < 0){
        printf("Not strong number\n");
        return 0;
    }

    original = n;

    do{
        int digit = n % 10;
        int factorial = 1;

        for(int i = 1; i <= digit; i++){
            factorial *= i;
        }

        sum += factorial;
        n /= 10;
    }while(n > 0);

    if(sum == original){
        printf("Strong number\n");
    }
    else{
        printf("Not strong number\n");
    }

    return 0;
}
