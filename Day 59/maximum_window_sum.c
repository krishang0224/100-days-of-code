/*
Write a program to take an integer array arr and an integer k as inputs. Print the
maximum sum of all the subarrays of size k.
*/
// Input: n (1-1000), then n integers and then k.
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
    int k;
    if(scanf("%d", &k) != 1 || k < 1 || k > n){
        return 0;
    }
    long long sum = 0;
    for(int i = 0; i < k; i++){
        sum += a[i];
    }
    long long maximum = sum;
    for(int i = k; i < n; i++){
        sum += (long long)a[i] - a[i - k];
        if(sum > maximum){
            maximum = sum;
        }
    }
    printf("%lld\n", maximum);
    return 0;
}
