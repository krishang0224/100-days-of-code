// Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main(){
    int rows, columns, matrix[100][100], sum = 0;
    scanf("%d %d", &rows, &columns);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    if(rows != columns){
        printf("Matrix is not square\n");
        return 0;
    }

    for(int i = 0; i < rows; i++){
        sum += matrix[i][i];
    }

    printf("%d\n", sum);
    return 0;
}
