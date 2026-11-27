/*
Write a program to take a string s as input. The task is to find the length of the
longest substring without repeating characters. Print the length as output.
*/
// Input: one line, at most 999 characters.
#include <stdio.h>

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
    int last[256], start = 0, longest = 0;
    for(int i = 0; i < 256; i++){
        last[i] = -1;
    }
    for(int i = 0; i < length; i++){
        unsigned char ch = str[i];
        if(last[ch] >= start){
            start = last[ch] + 1;
        }
        last[ch] = i;
        if(i - start + 1 > longest){
            longest = i - start + 1;
        }
    }
    printf("%d\n", longest);
    return 0;
}
