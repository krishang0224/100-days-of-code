// Find the longest word in a sentence.
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
    int start = 0, bestStart = 0, bestLength = 0;
    while(start < length){
        while(str[start] == ' ' || str[start] == '\t'){
            start++;
        }
        int end = start;
        while(end < length && str[end] != ' ' && str[end] != '\t'){
            end++;
        }
        if(end - start > bestLength){
            bestLength = end - start;
            bestStart = start;
        }
        start = end;
    }
    for(int i = bestStart; i < bestStart + bestLength; i++){
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
