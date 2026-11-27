/*
Write a program to take two sorted arrays of size m and n as input. Merge both the
arrays such that the merged array is also sorted. Print the merged array.
*/
// Input: m, then m sorted integers, then n and n sorted integers (sizes 0-1000).
#include <stdio.h>

int main(){
    int m, n, first[1000], second[1000];
    if(scanf("%d", &m) != 1 || m < 0 || m > 1000){
        return 0;
    }
    for(int i = 0; i < m; i++){
        if(scanf("%d", &first[i]) != 1){
            return 0;
        }
    }
    if(scanf("%d", &n) != 1 || n < 0 || n > 1000){
        return 0;
    }
    for(int i = 0; i < n; i++){
        if(scanf("%d", &second[i]) != 1){
            return 0;
        }
    }
    int i = 0, j = 0;
    for(int k = 0; k < m + n; k++){
        int value;
        if(i < m && (j == n || first[i] <= second[j])){
            value = first[i++];
        }
        else{
            value = second[j++];
        }
        if(k > 0){
            printf(" ");
        }
        printf("%d", value);
    }
    printf("\n");
    return 0;
}
