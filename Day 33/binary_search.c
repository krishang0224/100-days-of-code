// Search in a sorted array using binary search.
#include <stdio.h>

int main(){
    int n, array[100], element;
    int left = 0, right, index = -1;
    scanf("%d", &n);

    if(n < 1 || n > 100){
        printf("Invalid size\n");
        return 0;
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    scanf("%d", &element);
    right = n - 1;

    while(left <= right){
        int middle = (left + right) / 2;

        if(array[middle] == element){
            index = middle;
            break;
        }
        else if(array[middle] < element){
            left = middle + 1;
        }
        else{
            right = middle - 1;
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
