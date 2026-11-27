/*
Write a program to take an integer array as input. Only one element will be repeated.
Print the repeated element. Try to find the result in one single iteration.
*/
// Input: n (1-1000), then n integers.
#include <stdio.h>

int main(){
    int n, value, keys[2048], used[2048] = {0};
    if(scanf("%d", &n) != 1 || n < 1 || n > 1000){
        return 0;
    }
    // Store seen values in a table; collisions use the next free slot.
    for(int i = 0; i < n; i++){
        if(scanf("%d", &value) != 1){
            return 0;
        }
        unsigned int slot = (unsigned int)value % 2048;
        while(used[slot] && keys[slot] != value){
            slot = (slot + 1) % 2048;
        }
        if(used[slot]){
            printf("%d\n", value);
            return 0;
        }
        used[slot] = 1;
        keys[slot] = value;
    }
    printf("-1\n");
    return 0;
}
