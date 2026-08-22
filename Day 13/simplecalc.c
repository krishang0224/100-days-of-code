#include <stdio.h>

int main() {
    int x, y, z;
    printf("Enter 1-Addition, 2-Subtraction, 3-Multiplication, 4-Division, 5-Modulus\n");
    scanf("%d", &x);
    
    printf("Enter your 2 numbers: ");
    scanf("%d %d", &y, &z);  
    switch (x) {
        case 1: {
            printf("Sum is %d\n", y + z);
            break;
        }
        case 2: {
            printf("Subtraction is %d\n", y - z);
            break;
        }
        case 3: {
            printf("Multiplication is %d\n", y * z);
            break;
        }
        case 4: {
            if (z == 0) {
                printf("Error: Division by zero\n");
            } else {
                float div = (1.0 * y) / z;
                printf("Division is %.2f\n", div);
            }
            break;
        }
        case 5: {
            if (z == 0) {
                printf("Error: Modulus by zero\n");
            } else {
                printf("Modulus is %d\n", y % z);
            }
            break;
        }
        default:
            printf("Invalid choice\n");
            break;
    }
    return 0;
}