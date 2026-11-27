/*
Write a program to take an integer array arr and an integer k as inputs. The task is to
find the first negative integer in each subarray of size k moving from left to right. If
no negative exists in a window, print "0" for that window. Print the results separated
by spaces as output.
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
        int negative = 0;
        for(int j = i; j < i + k; j++){
            if(a[j] < 0){
                negative = a[j];
                break;
            }
        }
        if(i > 0){
            printf(" ");
        }
        printf("%d", negative);
    }
    printf("\n");
    return 0;
}
