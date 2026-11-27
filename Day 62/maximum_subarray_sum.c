/*
Write a program to take an integer array arr as input. The task is to find the maximum
sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as
output. If all elements are negative, print the largest (least negative) element.
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
    long long current = a[0], maximum = a[0];
    for(int i = 1; i < n; i++){
        if(current < 0){
            current = a[i];
        }
        else{
            current += a[i];
        }
        if(current > maximum){
            maximum = current;
        }
    }
    printf("%lld\n", maximum);
    return 0;
}
