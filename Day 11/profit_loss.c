#include <stdio.h>

int main(){
    int x,y;
    printf("Enter cost price and selling price: ");
    scanf("%d %d",&x,&y);
    if(x == y){
        printf("No loss No Profit");
    }
    else if(x > y){
        float p = (((x-y)*100))/x;
        printf("Loss is: %.2f%%",p);
    }
    else if(y>x){
        float p = (((y-x))*100.0)/x;
        printf("Profit is: %.2f%%",p);
    }
    return 0;
}