// Rotate an array to the right by k positions.
#include <stdio.h>

int main(){
    int n, array[100], rotated[100], k;
    scanf("%d", &n);
    if(n < 1 || n > 100){
        printf("Invalid size\n");
        return 0;
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    scanf("%d", &k);
    if(k < 0){
        printf("Invalid rotation\n");
        return 0;
    }
    k = k % n;
    for(int i = 0; i < n; i++){
        rotated[(i + k) % n] = array[i];
    }
    for(int i = 0; i < n; i++){
        printf("%d ", rotated[i]);
    }
    printf("\n");
    return 0;
}
