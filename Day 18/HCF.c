// Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main(){
    int a, b, temp;
    scanf("%d %d", &a, &b);

    if(a < 0){
        a = -a;
    }
    if(b < 0){
        b = -b;
    }

    if(a == 0 && b == 0){
        printf("Invalid input\n");
        return 0;
    }

    while(b != 0){
        temp = a % b;
        a = b;
        b = temp;
    }

    printf("%d\n", a);
    return 0;
}
