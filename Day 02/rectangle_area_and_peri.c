// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main() {
    float length, breadth;
    scanf("%f %f", &length, &breadth);
    float area = length * breadth;
    float perimeter = 2 * (length + breadth);
    printf("Area=%g, Perimeter=%g\n", area, perimeter);
    return 0;
}
