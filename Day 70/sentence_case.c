/*
Write a program to take a string input. Change it to sentence case.
*/
// Input: one line, at most 999 characters.
// Follow the examples: capitalize each word and keep punctuation.
#include <stdio.h>
#include <ctype.h>

int main(){
    char str[1000];
    if(fgets(str, sizeof(str), stdin) == NULL){
        return 0;
    }
    int length = 0;
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
    int newWord = 1;
    for(int i = 0; i < length; i++){
        unsigned char ch = str[i];
        if(isspace(ch)){
            newWord = 1;
        }
        else{
            if(newWord){
                str[i] = toupper(ch);
            }
            else{
                str[i] = tolower(ch);
            }
            newWord = 0;
        }
    }
    printf("%s\n", str);
    return 0;
}
