// Read and print a matrix.
#include <stdio.h>

int main(){
    int rows, columns, matrix[100][100];
    scanf("%d %d", &rows, &columns);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
