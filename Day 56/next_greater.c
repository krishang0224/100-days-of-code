/*
Write a program to take an array arr[] of integers as input, the task is to find the
next greater element for each element of the array in order of their appearance in the
array. Next greater element of an element in the array is the nearest element on the
right which is greater than the current element. If there does not exist next greater of
current element, then next greater element for current element is -1.  N.B: - Print the
output for each element in a comma separated fashion. - Do not use Stack, use brute
force approach (nested loop) to solve.
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
    for(int i = 0; i < n; i++){
        int greater = -1;
        for(int j = i + 1; j < n; j++){
            if(a[j] > a[i]){
                greater = a[j];
                break;
            }
        }
        if(i > 0){
            printf(", ");
        }
        printf("%d", greater);
    }
    printf("\n");
    return 0;
}
