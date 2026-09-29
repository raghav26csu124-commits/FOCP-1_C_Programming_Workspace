#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three angles: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || (a + b + c != 180)) {
        printf("Invalid\n");
    } else if (a < 90 && b < 90 && c < 90) {
        printf("Acute\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("Right\n");
    } else {
        printf("Obtuse\n");
    }

    return 0;
}