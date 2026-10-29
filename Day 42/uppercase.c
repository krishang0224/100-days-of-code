// Convert a lowercase string to uppercase without using built-in functions.
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
    for(int i = 0; i < length; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 'a' + 'A';
        }
    }
    printf("%s\n", str);
    return 0;
}
