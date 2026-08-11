// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    float area = 3.14 * r * r;
    float circum = 2 * 3.14 * r;
    printf("Area=%.2f, Circumference=%.2f\n", area, circum);

    return 0;
}