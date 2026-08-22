// Write a program to input an integer and check whether it is even or odd using if–else.


#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if (x%2 == 0){
        printf("%d is even\n", x);
    }
    else{
        printf("%d is odd\n", x);
    }
    return 0;
}