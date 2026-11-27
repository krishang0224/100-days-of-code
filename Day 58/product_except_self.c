/*
Write a Program to take an integer array nums. Print an array answer such that answer[i]
is equal to the product of all the elements of nums except nums[i]. The product of any
prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
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
    long long answer[1000], product = 1;
    for(int i = 0; i < n; i++){
        answer[i] = product;
        product *= a[i];
    }
    product = 1;
    for(int i = n - 1; i >= 0; i--){
        answer[i] *= product;
        product *= a[i];
    }
    printf("[");
    for(int i = 0; i < n; i++){
        if(i > 0){
            printf(",");
        }
        printf("%lld", answer[i]);
    }
    printf("]\n");
    return 0;
}
