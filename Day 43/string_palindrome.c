// Check if a string is a palindrome.
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
    int palindrome = 1;
    for(int i = 0; i < length / 2; i++){
        if(str[i] != str[length - 1 - i]){
            palindrome = 0;
            break;
        }
    }
    if(palindrome){
        printf("Palindrome\n");
    }
    else{
        printf("Not palindrome\n");
    }
    return 0;
}
