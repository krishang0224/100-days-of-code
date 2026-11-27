/*
Write a program to take an input array of size n. The array should contain all the
integers between 0 to n except for one. Print that missing number
*/
// Input: n (0-1000), then n distinct integers from 0 to n.
#include <stdio.h>

int main(){
    int n, value;
    if(scanf("%d", &n) != 1 || n < 0 || n > 1000){
        return 0;
    }
    int missing = n;
    for(int i = 0; i < n; i++){
        if(scanf("%d", &value) != 1){
            return 0;
        }
        missing ^= i ^ value;
    }
    printf("%d\n", missing);
    return 0;
}
