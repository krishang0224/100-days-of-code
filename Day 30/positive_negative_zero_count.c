// Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main(){
    int n, array[100], positive = 0, negative = 0, zero = 0;
    scanf("%d", &n);

    if(n < 1 || n > 100){
        printf("Invalid size\n");
        return 0;
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);

        if(array[i] > 0){
            positive++;
        }
        else if(array[i] < 0){
            negative++;
        }
        else{
            zero++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);
    return 0;
}
