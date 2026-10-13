// Find the sum of all elements in a matrix.
#include <stdio.h>

int main(){
    int rows, columns, matrix[100][100], sum = 0;
    scanf("%d %d", &rows, &columns);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("%d\n", sum);
    return 0;
}
