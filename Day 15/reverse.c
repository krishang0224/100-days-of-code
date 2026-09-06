//Write a program to reverse a given number.

#include <stdio.h>

int main(){
    int x,rem;
    long long rev =0;
    scanf("%d",&x);
    if(x<0){
        printf("Invalid input\n");
        return 0;
    }
    while(x>0){
        rem = x%10;
        x = x/10;
        rev = rev*10+rem;
    }
    printf("%lld\n",rev);
    return 0;
}
