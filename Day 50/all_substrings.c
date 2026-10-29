// Print all sub-strings of a string.
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
    int first = 1;
    for(int start = 0; start < length; start++){
        for(int end = start; end < length; end++){
            if(!first){
                printf(",");
            }
            for(int i = start; i <= end; i++){
                printf("%c", str[i]);
            }
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
