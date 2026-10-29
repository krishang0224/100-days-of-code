// Print the initials of a name.
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
        if(str[i] != ' ' && str[i] != '\t' &&
           (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t')){
            printf("%c.", str[i]);
        }
    }
    printf("\n");
    return 0;
}
