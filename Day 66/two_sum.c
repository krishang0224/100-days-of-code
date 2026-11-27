/*
Write a program to take an integer array nums which contains only positive integers, and
an integer target as inputs. The goal is to find two distinct indices i and j in the
array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists
and return the indices in any order. Print the two indices separated by a space as
output. If no solution exists, print "-1 -1".
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
    int target;
    if(scanf("%d", &target) != 1){
        return 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if((long long)a[i] + a[j] == target){
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    printf("-1 -1\n");
    return 0;
}
