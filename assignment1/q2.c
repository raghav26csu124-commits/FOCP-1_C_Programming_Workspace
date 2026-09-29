#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Height in meters: ");
    scanf("%f", &height);

    printf("Enter Grade: ");
    scanf(" %c", &grade); // Space before %c consumes leftover newline

    printf("\n--- Entered Details ---\n");
    printf("Age   : %d\n", age);
    printf("Height: %.2f m\n", height);
    printf("Grade : %c\n", grade);

    return 0;
}