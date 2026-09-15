// Write a program to find the LCM of two numbers.
#include <stdio.h>

int main(){
    int a, b, x, y, temp;
    long long lcm;
    scanf("%d %d", &a, &b);

    if(a < 0){
        a = -a;
    }
    if(b < 0){
        b = -b;
    }

    if(a == 0 || b == 0){
        printf("0\n");
        return 0;
    }

    x = a;
    y = b;

    while(y != 0){
        temp = x % y;
        x = y;
        y = temp;
    }

    lcm = (long long)a / x * b;
    printf("%lld\n", lcm);
    return 0;
}
