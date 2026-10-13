// Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main(){
    int rows, columns, matrix[100][100], distinct = 1;
    scanf("%d %d", &rows, &columns);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    if(rows != columns){
        distinct = 0;
    }
    else{
        for(int i = 0; i < rows; i++){
            for(int j = i + 1; j < rows; j++){
                if(matrix[i][i] == matrix[j][j]){
                    distinct = 0;
                }
            }
        }
    }

    if(distinct){
        printf("True\n");
    }
    else{
        printf("False\n");
    }

    return 0;
}
