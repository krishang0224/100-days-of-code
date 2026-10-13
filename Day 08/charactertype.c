//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main(){
    char x;
    scanf("%c",&x);
    if(x >= 'A' && x <= 'Z'){
        printf("Uppercase alphabet\n");
    }
    else if(x >='a' && x <= 'z'){
        printf("Lowercase alphabet\n");
    }
    else if(x >='0' && x <='9'){
        printf("Digit\n");
    }
    else{
        printf("Special character\n");
    }
    return 0;
}
