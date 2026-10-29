// Count spaces, digits, and special characters in a string.
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
    int spaces = 0, digits = 0, special = 0;
    for(int i = 0; i < length; i++){
        char ch = str[i];
        if(ch == ' '){
            spaces++;
        }
        else if(ch >= '0' && ch <= '9'){
            digits++;
        }
        else if(!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))){
            special++;
        }
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
