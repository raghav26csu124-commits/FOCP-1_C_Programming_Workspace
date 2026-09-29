#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5;
    float totalMarks, percentage;

    printf("Enter marks obtained in 5 subjects (out of 100):\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    totalMarks = m1 + m2 + m3 + m4 + m5;
    percentage = (totalMarks / 500.0) * 100.0;

    printf("Total Marks = %.2f / 500\n", totalMarks);
    printf("Percentage  = %.2f%%\n", percentage);

    return 0;
}