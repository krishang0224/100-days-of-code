// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main() {
    float length, breadth;

    printf("Enter length and breadth: ");
    scanf("%f %f", &length, &breadth);
    float area = length * breadth;
    float perimeter = 2 * (length + breadth);

    printf("Area: %f", area);
    printf(",Perimeter: %f", perimeter);

    return 0;
}