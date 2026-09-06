#include <stdio.h>

int main(){
    int x;
    int place = 1;
    scanf("%d", &x);
    if(x<0){
        printf("Invalid input\n");
        return 0;
    }
    if(x==0){
        printf("0\n");
        return 0;
    }
    while(place<=x/2){
        place *= 2;
    }
    while(place>0){
        printf("%d",x/place);
        x %= place;
        place /= 2;
    }
    printf("\n");
    return 0;
}
