// Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main(){
    int n, array[101], element;
    scanf("%d", &n);

    if(n < 1 || n > 100){
        printf("Invalid size\n");
        return 0;
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    scanf("%d", &element);

    int i = n - 1;
    while(i >= 0 && array[i] > element){
        array[i + 1] = array[i];
        i--;
    }

    array[i + 1] = element;
    n++;

    for(int j = 0; j < n; j++){
        printf("%d ", array[j]);
    }

    printf("\n");
    return 0;
}
