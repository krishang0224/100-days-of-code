// Check if a matrix is symmetric.
#include <stdio.h>

int main(){
    int rows, columns, matrix[100][100], symmetric = 1;
    scanf("%d %d", &rows, &columns);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    if(rows != columns){
        symmetric = 0;
    }
    else{
        for(int i = 0; i < rows; i++){
            for(int j = i + 1; j < columns; j++){
                if(matrix[i][j] != matrix[j][i]){
                    symmetric = 0;
                }
            }
        }
    }

    if(symmetric){
        printf("True\n");
    }
    else{
        printf("False\n");
    }

    return 0;
}
