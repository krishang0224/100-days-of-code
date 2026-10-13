// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
    float r;
    scanf("%f", &r);
    float area = 3.14159265f * r * r;
    float circum = 2 * 3.14159265f * r;
    printf("Area=%.2f, Circumference=%.2f\n", area, circum);
    return 0;
}
