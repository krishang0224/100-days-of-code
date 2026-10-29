// Reverse each word in a sentence without changing the word order.
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
    int start = 0;
    while(start < length){
        if(str[start] == ' ' || str[start] == '\t'){
            printf("%c", str[start]);
            start++;
        }
        else{
            int end = start;
            while(end < length && str[end] != ' ' && str[end] != '\t'){
                end++;
            }
            for(int i = end - 1; i >= start; i--){
                printf("%c", str[i]);
            }
            start = end;
        }
    }
    printf("\n");
    return 0;
}
