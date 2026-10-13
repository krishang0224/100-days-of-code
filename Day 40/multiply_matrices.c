// Multiply two matrices.
#include <stdio.h>

int main(){
    int rows1, columns1, rows2, columns2;
    int first[100][100], second[100][100], product[100][100] = {0};
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

    if(columns1 != rows2){
        printf("Matrices cannot be multiplied\n");
        return 0;
    }

    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < columns2; j++){
            for(int k = 0; k < columns1; k++){
                product[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < columns2; j++){
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
