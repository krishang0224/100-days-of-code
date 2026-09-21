// Find the maximum and minimum element in an array.
#include <stdio.h>

int main(){
    int n, array[100];
    scanf("%d", &n);

    if(n < 1 || n > 100){
        printf("Invalid size\n");
        return 0;
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    int maximum = array[0];
    int minimum = array[0];

    for(int i = 1; i < n; i++){
        if(array[i] > maximum){
            maximum = array[i];
        }
        if(array[i] < minimum){
            minimum = array[i];
        }
    }

    printf("Max=%d, Min=%d\n", maximum, minimum);
    return 0;
}
