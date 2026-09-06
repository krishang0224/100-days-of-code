// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main(){
    int n;
    long long sum=0;
    scanf("%d",&n);
    if(n<0){
        printf("Invalid input\n");
        return 0;
    }
    for(int i=0;i<n;i++){
        sum += (2LL*i+1);
    }
    printf("%lld\n",sum);
    return 0;
}
