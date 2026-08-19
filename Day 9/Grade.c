#include <stdio.h>

int main(){
    int x;
    printf("Enter your marks: \n");
    scanf("%d",&x);
    if(x>=90 && x<=100){
        printf("Grade A");
    }
    else if(x>=80 && x<=89){
        printf("Grade B");
    }
    else if(x>=70 && x<=79){
        printf("Grade C");
    }
    else if(x>=60 && x<=69){
        printf("Grade D");
    }
    else if(x<60){
        printf("Grade F");
    }
    else{
        printf("Invalid marks");
    }
    return 0;
}