/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

#include <stdio.h>

int main(){
    int x;
    printf("Enter days: ");
    scanf("%d",&x);
    if(x<=5){
        int fees = x*2;
        printf("Fine %d",fees);
    }
    else if(x<=10){
        int fees = (x-5)*4;
        printf("Fine %d",fees+10);
    }
    else if(x<=30){
        int fees = ((x-10)*6)+30;
        printf("Fine %d",fees);
    }
    else if(x>30){
        printf("Membership cancelled");
    }
    return 0;
}