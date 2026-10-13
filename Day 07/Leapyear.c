#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if((x%4==0 && x%100 !=0)||(x%400 == 0)){
        printf("Leap year\n");
    }
    else{
        printf("Not a leap year\n");
    }
    return 0;
}
