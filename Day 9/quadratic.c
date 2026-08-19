#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter the coefficients: \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a == 0) {
        printf("not valid quadratic eqn\n");
        return 0;
    }
    int D = b * b - 4 * a * c;
    if (D > 0) {
        float root1 = (-b + sqrt(D)) / (2 * a);
        float root2 = (-b - sqrt(D)) / (2 * a);
        printf("roots are real and different: %.2f, %.2f\n", root1, root2);
    } 
    else if (D == 0) {
        float root = (float)-b / (2 * a); 
        printf("Roots are real and equal: %.2f\n", root);
    } 
    else {
        printf("roots are complex\n");
    }
    return 0;
}
