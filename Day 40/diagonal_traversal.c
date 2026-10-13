// Perform diagonal traversal of a matrix.
#include <stdio.h>

int main(){
    int rows, columns, matrix[100][100];
    scanf("%d %d", &rows, &columns);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int diagonal = 0; diagonal < rows + columns - 1; diagonal++){
        if(diagonal % 2 == 0){
            int i = diagonal < rows ? diagonal : rows - 1;
            int j = diagonal - i;

            while(i >= 0 && j < columns){
                printf("%d ", matrix[i][j]);
                i--;
                j++;
            }
        }
        else{
            int j = diagonal < columns ? diagonal : columns - 1;
            int i = diagonal - j;

            while(j >= 0 && i < rows){
                printf("%d ", matrix[i][j]);
                i++;
                j--;
            }
        }
    }

    printf("\n");
    return 0;
}
