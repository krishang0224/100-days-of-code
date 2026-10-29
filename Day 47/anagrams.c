// Check if two strings are anagrams of each other.
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
    char second[1000];
    int length2 = 0;
    if(fgets(second, sizeof(second), stdin) == NULL){
        return 0;
    }
    while(second[length2] != '\0' && second[length2] != '\n' && second[length2] != '\r'){
        length2++;
    }
    if(length2 == 999){
        int next = getchar();
        if(next == '\r'){
            next = getchar();
        }
        if(next != '\n' && next != EOF){
            return 0;
        }
    }
    second[length2] = '\0';
    int count[256] = {0}, anagram = 1;
    for(int i = 0; i < length; i++){
        count[(unsigned char)str[i]]++;
    }
    for(int i = 0; i < length2; i++){
        count[(unsigned char)second[i]]--;
    }
    for(int i = 0; i < 256; i++){
        if(count[i] != 0){
            anagram = 0;
            break;
        }
    }
    if(anagram){
        printf("Anagrams\n");
    }
    else{
        printf("Not anagrams\n");
    }
    return 0;
}
