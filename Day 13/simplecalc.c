// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main(){
    int a, b;
    char operation;
    scanf("%d %d %c", &a, &b, &operation);

    switch(operation){
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if(b == 0){
                printf("Cannot divide by zero\n");
            }
            else{
                printf("%d\n", a / b);
            }
            break;
        case '%':
            if(b == 0){
                printf("Cannot divide by zero\n");
            }
            else{
                printf("%d\n", a % b);
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
