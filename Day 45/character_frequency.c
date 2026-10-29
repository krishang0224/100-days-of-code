// Count frequency of a given character in a string.
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
    char ch;
    int count = 0;
    if(scanf("%c", &ch) != 1){
        return 0;
    }
    for(int i = 0; i < length; i++){
        if(str[i] == ch){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
