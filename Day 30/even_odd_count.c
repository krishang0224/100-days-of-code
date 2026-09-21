// Count even and odd numbers in an array.
#include <stdio.h>

int main(){
    int n, array[100], even = 0, odd = 0;
    scanf("%d", &n);

    if(n < 1 || n > 100){
        printf("Invalid size\n");
        return 0;
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);

        if(array[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}
