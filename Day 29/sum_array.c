// Find the sum of array elements.
#include <stdio.h>

int main(){
    int n, array[100], sum = 0;
    scanf("%d", &n);

    if(n < 1 || n > 100){
        printf("Invalid size\n");
        return 0;
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("%d\n", sum);
    return 0;
}
