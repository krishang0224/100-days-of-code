//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Enter the coefficients: \n");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        printf("not valid quadratic eqn\n");
        return 0; 
    }
    float D = b * b - 4 * a * c;

    if (D > 0) {
        float x = (-b + sqrt(D)) / (2 * a);
        float y = (-b - sqrt(D)) / (2 * a);
        printf("roots are real and different: %.2f, %.2f\n", x, y);
    } 
    else if (D == 0) {
        float x = -b / (2 * a);
        printf("Roots are real and equal: %.2f\n", x);
    } 
    else {
        printf("roots are complex\n");
    }
    return 0;
}
