/*
Write a program to take an integer array nums of size n, and print the majority element.
The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print
-1 if no such element exists. Note: Majority Element is not necessarily the element that
is present most number of times.
*/
// Input: n (1-1000), then n integers.
#include <stdio.h>

int main(){
    int n, a[1000];
    if(scanf("%d", &n) != 1 || n < 1 || n > 1000){
        return 0;
    }
    for(int i = 0; i < n; i++){
        if(scanf("%d", &a[i]) != 1){
            return 0;
        }
    }
    int candidate = 0, count = 0;
    for(int i = 0; i < n; i++){
        if(count == 0){
            candidate = a[i];
        }
        if(a[i] == candidate){
            count++;
        }
        else{
            count--;
        }
    }
    count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == candidate){
            count++;
        }
    }
    if(count > n / 2){
        printf("%d\n", candidate);
    }
    else{
        printf("-1\n");
    }
    return 0;
}
