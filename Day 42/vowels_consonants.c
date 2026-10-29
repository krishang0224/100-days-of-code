// Count vowels and consonants in a string.
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
    int vowels = 0, consonants = 0;
    for(int i = 0; i < length; i++){
        char ch = str[i];
        if(ch >= 'A' && ch <= 'Z'){
            ch = ch - 'A' + 'a';
        }
        if(ch >= 'a' && ch <= 'z'){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
    }
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}
