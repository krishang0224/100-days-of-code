/*
Write a Program to take a positive integer n as input, and find the pivot integer x such
that the sum of all elements between 1 and x inclusively equals the sum of all elements
between x and n inclusively. Print the pivot integer x. If no such integer exists, print
-1. Assume that it is guaranteed that there will be at most one pivot integer for the
given input.
*/
// Input: one positive integer n.
#include <stdio.h>

int main(){
    int n;
    if(scanf("%d", &n) != 1 || n < 1){
        return 0;
    }
    long long total = (long long)n * (n + 1LL) / 2;
    long long low = 1, high = n;
    // Both sums include x, so equality reduces to x*x = total.
    while(low <= high){
        long long mid = low + (high - low) / 2;
        if(mid * mid == total){
            printf("%lld\n", mid);
            return 0;
        }
        if(mid * mid < total){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    printf("-1\n");
    return 0;
}
