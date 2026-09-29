#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Enter two numbers and an operator (+, -, *, /, %%): ");
    if (scanf("%d %d %c", &num1, &num2, &op) != 3) {
        // Fallback input ordering parsing if format given as 15 4 %
        scanf("%d %c %d", &num1, &op, &num2);
    }

    switch (op) {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;
        case '-':
            printf("Result = %d\n", num1 - num2);
            break;
        case '*':
            printf("Result = %d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Cannot divide by zero\n");
            } else {
                printf("Result = %d\n", num1 / num2);
            }
            break;
        case '%':
            if (num2 == 0) {
                printf("Cannot divide by zero\n");
            } else {
                printf("Result = %d\n", num1 % num2);
            }
            break;
        default:
            printf("Invalid Operator\n");
    }

    return 0;
}