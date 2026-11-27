/*
Write a program to take an integer array arr and an integer k as inputs. The task is to
find the maximum element in each subarray of size k moving from left to right. Print the
maximum elements for each window separated by spaces as output.
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
    for(int i = 0; i <= n - k; i++){
        int maximum = a[i];
        for(int j = i + 1; j < i + k; j++){
            if(a[j] > maximum){
                maximum = a[j];
            }
        }
        if(i > 0){
            printf(" ");
        }
        printf("%d", maximum);
    }
    printf("\n");
    return 0;
}
