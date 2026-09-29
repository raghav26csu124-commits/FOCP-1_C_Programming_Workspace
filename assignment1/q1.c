#include <stdio.h>

int main() {
    int studentID = 101;
    int age = 20;
    float percentage = 88.5;
    char grade = 'A';

    printf("--- Student Information ---\n");
    printf("Student ID : %d\n", studentID);
    printf("Age        : %d years\n", age);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %c\n", grade);

    return 0;
}