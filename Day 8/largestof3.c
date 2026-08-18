#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x >= y && x >= z){
        printf("%d is the largest",x);
    }
    else if(y >= x && y >= z){
        printf("%d is the largest",y);
    }
    else{
        printf("%d is the largest",z);
    }
    return 0;
}