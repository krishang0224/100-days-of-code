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