// Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int sum = x*(x+1)/2;
    printf("%d",sum);
    return 0;

}