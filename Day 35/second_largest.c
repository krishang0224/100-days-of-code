// Find the second largest element in an array.
#include <stdio.h>

int main(){
    int n, array[100], second = 0, found = 0;
    scanf("%d", &n);
    if(n < 1 || n > 100){
        printf("Invalid size\n");
        return 0;
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    int largest = array[0];
    for(int i = 1; i < n; i++){
        if(array[i] > largest){
            second = largest;
            largest = array[i];
            found = 1;
        }
        else if(array[i] < largest && (!found || array[i] > second)){
            second = array[i];
            found = 1;
        }
    }
    if(!found){
        printf("No second largest element\n");
    }
    else{
        printf("%d\n", second);
    }
    return 0;
}
