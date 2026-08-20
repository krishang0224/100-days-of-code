//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main(){
    char x;
    scanf("%c",&x);
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
        x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
        printf("%c is vowel",x);
    }
    else{
        printf("%c is consonant",x);
    }
    return 0;
}