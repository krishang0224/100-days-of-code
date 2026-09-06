// Write a program to calculate the factorial of a number.

#include <stdio.h>

int main(){
    int n;
    int x=0;
    long long multi=1;
    scanf("%d",&n);
    if(n<0){
        printf("Invalid input\n");
        return 0;
    }
    if(n>20){
        printf("Number is too large\n");
        return 0;
    }
    while(x<n){
        multi *= n-x;
        x++;
    }
    printf("%lld\n",multi);
    return 0;
}
