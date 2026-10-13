// Delete an element from an array.
#include <stdio.h>

int main(){
    int n, array[100], position;
    scanf("%d", &n);
    if(n < 1 || n > 100){
        printf("Invalid size\n");
        return 0;
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    scanf("%d", &position);
    if(position < 0 || position >= n){
        printf("Invalid position\n");
        return 0;
    }
    for(int i = position; i < n - 1; i++){
        array[i] = array[i + 1];
    }
    n--;
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
