#include <stdio.h>

int main() {
    double basicSalary, allowance, bonus, finalSalary;

    printf("Enter Basic Salary: ");
    scanf("%lf", &basicSalary);

    printf("Enter Allowance: ");
    scanf("%lf", &allowance);

    printf("Enter Bonus: ");
    scanf("%lf", &bonus);

    finalSalary = basicSalary + allowance + bonus;

    printf("Final Salary = %.2lf\n", finalSalary);

    return 0;
}