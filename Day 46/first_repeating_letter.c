// Find the first repeating lowercase alphabet in a string.
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
    int count[26] = {0};
    for(int i = 0; i < length; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            count[str[i] - 'a']++;
        }
    }
    for(int i = 0; i < length; i++){
        if(str[i] >= 'a' && str[i] <= 'z' && count[str[i] - 'a'] > 1){
            printf("%c\n", str[i]);
            return 0;
        }
    }
    printf("No repeating alphabet\n");
    return 0;
}
