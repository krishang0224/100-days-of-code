// Find the second largest element in an array.
#include <stdio.h>
#include <limits.h>

int main(){
    int n, array[100];
    int largest = INT_MIN, second = INT_MIN;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);

        if(array[i] > largest){
            second = largest;
            largest = array[i];
        }
        else if(array[i] > second && array[i] != largest){
            second = array[i];
        }
    }

    if(second == INT_MIN){
        printf("No second largest element\n");
    }
    else{
        printf("%d\n", second);
    }

    return 0;
}
