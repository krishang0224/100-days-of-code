/*
Write a Program to take a sorted array arr[] and an integer x as input, find the index
(0-based) of the smallest element in arr[] that is greater than or equal to x and print
it. This element is called the ceil of x. If such an element does not exist, print -1.
Note: In case of multiple occurrences of ceil of x, return the index of the first
occurrence.
*/
// Input: n (1-1000), then n integers and then x.
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
    int x, answer = -1;
    if(scanf("%d", &x) != 1){
        return 0;
    }
    int low = 0, high = n - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(a[mid] >= x){
            answer = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    printf("%d\n", answer);
    return 0;
}
