// Read and print elements of a one-dimensional array.
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

    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}
