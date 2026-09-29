#include <stdio.h>

int main() {
    int dividend, divisor;

    printf("Enter two integers: ");
    scanf("%d %d", &dividend, &divisor);

    if (divisor != 0) {
        printf("Quotient = %d\n", dividend / divisor);
        printf("Remainder = %d\n", dividend % divisor);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}