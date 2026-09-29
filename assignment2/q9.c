#include <stdio.h>

int main() {
    float marks, attendance;

    printf("Enter Marks: ");
    scanf("%f", &marks);

    printf("Enter Attendance Percentage: ");
    scanf("%f", &attendance);

    if (marks >= 90 && attendance >= 70) {
        printf("Special Scholarship\n");
    } else if (marks >= 75 && attendance >= 75) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}