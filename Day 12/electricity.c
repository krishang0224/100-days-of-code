/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit */

#include <stdio.h>

int main(){
    int x;
    printf("Enter units:");
    scanf("%d",&x);
    if(x<=100){
    int bill = x*5;
        printf("Bill: %d",bill);
    }
    else if(x<=200){
        int bill = (x-100)*7;
        printf("Bill %d",bill+500);
    }
    else if(x<=300){
        int bill = (x-200)*10;
        printf("Bill %d",bill+1200);
    }
    else if(x>300){
        int bill = (x-300)*12;
        printf("Bill %d",bill+2300);
    }
    return 0;
}