// Add two matrices.
#include <stdio.h>

int main(){
    int rows1, columns1, rows2, columns2;
    int first[100][100], second[100][100];
    scanf("%d %d", &rows1, &columns1);

    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < columns1; j++){
            scanf("%d", &first[i][j]);
        }
    }

    scanf("%d %d", &rows2, &columns2);

    for(int i = 0; i < rows2; i++){
        for(int j = 0; j < columns2; j++){
            scanf("%d", &second[i][j]);
        }
    }

    if(rows1 != rows2 || columns1 != columns2){
        printf("Matrices cannot be added\n");
        return 0;
    }

    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < columns1; j++){
            printf("%d ", first[i][j] + second[i][j]);
        }
        printf("\n");
    }

    return 0;
}
