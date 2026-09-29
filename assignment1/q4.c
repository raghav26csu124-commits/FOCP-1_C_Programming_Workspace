#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;

    printf("Enter three integer values: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    average = (num1 + num2 + num3) / 3.0; // Cast by dividing using float constant

    printf("Average = %.2f\n", average);

    return 0;
}