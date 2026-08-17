// Write a program to calculate simple and compound interest for given principal, rate, and time

#include <stdio.h>
#include <math.h>

int main(){
    float Pa,r,t;
    scanf("%f %f %f",&Pa, &r,&t);
    float SI = (Pa*t*r)/100;
    float CI = Pa*pow(1+r/100,t)-Pa;
    printf("Simple interest is: %.2f, ",SI);
    printf("Compount interest is: %.2f",CI);
    return 0;
}