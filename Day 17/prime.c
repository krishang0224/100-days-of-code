// Write a program to check if a number is prime.
#include <stdio.h>

int main(){
    int n, prime = 1;
    scanf("%d", &n);

    if(n <= 1){
        prime = 0;
    }

    for(int i = 2; i <= n / i; i++){
        if(n % i == 0){
            prime = 0;
            break;
        }
    }

    if(prime == 1){
        printf("Prime\n");
    }
    else{
        printf("Not prime\n");
    }

    return 0;
}
