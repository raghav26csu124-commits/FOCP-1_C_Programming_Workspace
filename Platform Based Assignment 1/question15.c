#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int stars = (i <= (n / 2) + 1) ? i : (n - i + 1);
        for (int j = 1; j <= n; j++) {
            if (j <= stars || j >= n - stars + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}