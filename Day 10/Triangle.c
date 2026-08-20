//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x + y > z && x + z > y && z + y > x){
        if((x == y)&&(y==z)&&(x ==z )){
            printf("Triangle is equilateral\n");
        }
        else if(x != y && y != z && x != z){
            printf("Triangle is scalene\n");
        }
        else if(x == y || y == z || x == z){
            printf("Triangle is isoceles\n");
        }
    }
    else{
        printf("triangle is inavlid");
    }
    return 0;
}