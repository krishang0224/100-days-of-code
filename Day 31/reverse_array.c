// Reverse an array without taking extra space.
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

    for(int i = 0; i < n / 2; i++){
        int temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }

    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}
