// Insert an element in an array at a given position.
#include <stdio.h>

int main(){
    int n, array[101], position, element;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    scanf("%d %d", &position, &element);

    if(position < 0 || position > n){
        printf("Invalid position\n");
        return 0;
    }

    for(int i = n; i > position; i--){
        array[i] = array[i - 1];
    }

    array[position] = element;
    n++;

    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}
