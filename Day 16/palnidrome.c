// Write a program to check if a number is a palindrome. 

#include <stdio.h>

int main(){
    int x,y;
    long long rev = 0;
    scanf("%d",&x);
    int org = x;
    if(x<0){
        printf("%d is not palindrome\n",org);
        return 0;
    }
    while(x>0){
        y = x%10;
        x = x/10;
        rev = rev*10+y;
    }
    if(rev==org){
        printf("%d is palindrome\n",org);
    }
    else{
        printf("%d is not palindrome\n",org);
    }
    return 0;
}
