//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x + y > z && x + z > y && z + y > x){
        if((x == y)&&(y==z)&&(x ==z )){
            printf("Equilateral\n");
        }
        else if(x != y && y != z && x != z){
            printf("Scalene\n");
        }
        else if(x == y || y == z || x == z){
            printf("Isosceles\n");
        }
    }
    else{
        printf("triangle is invalid");
    }
    return 0;
}
