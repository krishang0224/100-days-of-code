/*
Write a program to take two strings s and t as inputs (assume all characters are
lowercase). The task is to determine if s and t are valid anagrams, meaning they contain
the same characters with the same frequencies. Print "Anagram" if they are, otherwise
"Not Anagram".
*/
// Input: two lowercase strings, one per line, at most 999 characters each.
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
    char second[1000];
    if(fgets(second, sizeof(second), stdin) == NULL){
        return 0;
    }
    int count[26] = {0};
    for(int i = 0; i < length; i++){
        if(str[i] < 'a' || str[i] > 'z'){
            return 0;
        }
        count[str[i] - 'a']++;
    }
    for(int i = 0; second[i] != '\0' && second[i] != '\n' && second[i] != '\r'; i++){
        if(second[i] < 'a' || second[i] > 'z'){
            return 0;
        }
        count[second[i] - 'a']--;
    }
    for(int i = 0; i < 26; i++){
        if(count[i] != 0){
            printf("Not Anagram\n");
            return 0;
        }
    }
    printf("Anagram\n");
    return 0;
}
