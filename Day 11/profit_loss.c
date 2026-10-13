#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x <= 0 || y < 0){
        printf("Invalid price");
    }
    else if(x == y){
        printf("No Profit No Loss\n");
    }
    else if(x > y){
        float p = ((x-y)*100.0)/x;
        printf("Loss %g%%\n",p);
    }
    else if(y>x){
        float p = (((y-x))*100.0)/x;
        printf("Profit %g%%\n",p);
    }
    return 0;
}
