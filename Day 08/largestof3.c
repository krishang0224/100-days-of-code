//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x >= y && x >= z){
        printf("Largest is %d\n",x);
    }
    else if(y >= x && y >= z){
        printf("Largest is %d\n",y);
    }
    else{
        printf("Largest is %d\n",z);
    }
    return 0;
}
