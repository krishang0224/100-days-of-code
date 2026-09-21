// Merge two arrays.
#include <stdio.h>

int main(){
    int n1, n2, first[100], second[100], merged[200];
    scanf("%d", &n1);

    if(n1 < 1 || n1 > 100){
        printf("Invalid size\n");
        return 0;
    }

    for(int i = 0; i < n1; i++){
        scanf("%d", &first[i]);
        merged[i] = first[i];
    }

    scanf("%d", &n2);

    if(n2 < 1 || n2 > 100){
        printf("Invalid size\n");
        return 0;
    }

    for(int i = 0; i < n2; i++){
        scanf("%d", &second[i]);
        merged[n1 + i] = second[i];
    }

    for(int i = 0; i < n1 + n2; i++){
        printf("%d ", merged[i]);
    }

    printf("\n");
    return 0;
}
