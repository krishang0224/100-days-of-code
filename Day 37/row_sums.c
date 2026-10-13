// Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main(){
    int rows, columns, matrix[100][100], rowSum[100] = {0};
    scanf("%d %d", &rows, &columns);
    if(rows < 1 || rows > 100 || columns < 1 || columns > 100){
        printf("Invalid size\n");
        return 0;
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }
    for(int i = 0; i < rows; i++){
        printf("%d ", rowSum[i]);
    }
    printf("\n");
    return 0;
}
