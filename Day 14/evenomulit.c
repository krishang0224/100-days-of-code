//Write a program to print the product of even numbers from 1 to n.


#include <stdio.h>

int main(){
    int n;
    int x=2;
    long long multi = 1;
    scanf("%d",&n);
    if(n<0){
        printf("Invalid input\n");
        return 0;
    }
    if(n>33){
        printf("Number is too large\n");
        return 0;
    }
    for(;x<=n;x+=2){
        multi *= x;
    }
    printf("%lld\n",multi);
    return 0;
}
