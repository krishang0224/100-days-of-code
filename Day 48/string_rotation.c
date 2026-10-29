// Check if one string is a rotation of another.
#include <stdio.h>

int main(){
    char str[1000];
    int length = 0;
    if(fgets(str, sizeof(str), stdin) == NULL){
        return 0;
    }
    while(str[length] != '\0' && str[length] != '\n' && str[length] != '\r'){
        length++;
    }
    if(length == 999){
        int next = getchar();
        if(next == '\r'){
            next = getchar();
        }
        if(next != '\n' && next != EOF){
            return 0;
        }
    }
    str[length] = '\0';
    char second[1000];
    int length2 = 0;
    if(fgets(second, sizeof(second), stdin) == NULL){
        return 0;
    }
    while(second[length2] != '\0' && second[length2] != '\n' && second[length2] != '\r'){
        length2++;
    }
    if(length2 == 999){
        int next = getchar();
        if(next == '\r'){
            next = getchar();
        }
        if(next != '\n' && next != EOF){
            return 0;
        }
    }
    second[length2] = '\0';
    int rotation = 0;
    if(length == length2){
        if(length == 0){
            rotation = 1;
        }
        for(int start = 0; start < length; start++){
            int match = 1;
            for(int j = 0; j < length; j++){
                if(str[(start + j) % length] != second[j]){
                    match = 0;
                    break;
                }
            }
            if(match){
                rotation = 1;
                break;
            }
        }
    }
    if(rotation){
        printf("Rotation\n");
    }
    else{
        printf("Not rotation\n");
    }
    return 0;
}
