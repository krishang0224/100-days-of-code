// Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 2; i <= n; i++){
        int prime = 1;

        for(int j = 2; j <= i / j; j++){
            if(i % j == 0){
                prime = 0;
                break;
            }
        }

        if(prime == 1){
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
