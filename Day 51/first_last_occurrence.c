/*
Write a Program to take a sorted array(say nums[]) and an integer (say target) as
inputs. The elements in the sorted array might be repeated. You need to print the first
and last occurrence of the target and print the index of first and last occurrence.
Print -1, -1 if the target is not present.
*/
// Input: n (1-1000), then n integers and then target.
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
    int target, first = -1, last = -1;
    if(scanf("%d", &target) != 1){
        return 0;
    }
    for(int i = 0; i < n; i++){
        if(a[i] == target){
            if(first == -1){
                first = i;
            }
            last = i;
        }
    }
    printf("%d,%d\n", first, last);
    return 0;
}
