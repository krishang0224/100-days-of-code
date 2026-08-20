//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main(){
    char x;
    scanf("%c",&x);
    if(x >= 'A' && x <= 'Z'){
        printf("%c uppercase alphabet",x);
    }
    else if(x >='a' && x <= 'z'){
        printf("%c lowercase alphabet",x);
    }
    else if(x >='0' && x <='9'){
        printf("%c digit",x);
    }
    else{
        printf("%c speical character",x);
    }
    return 0;
}