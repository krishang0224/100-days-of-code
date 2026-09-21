// Search for an element in an array using linear search.
#include <stdio.h>

int main(){
    int n, array[100], element, index = -1;
    scanf("%d", &n);

    if(n < 1 || n > 100){
        printf("Invalid size\n");
        return 0;
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    scanf("%d", &element);

    for(int i = 0; i < n; i++){
        if(array[i] == element){
            index = i;
            break;
        }
    }

    if(index == -1){
        printf("-1\n");
    }
    else{
        printf("Found at index %d\n", index);
    }

    return 0;
}
