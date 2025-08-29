#include <stdio.h>

int main()
{
    float grossSalary = 20000;
    float allowance, deduction, netSalary;

    allowance = 0.10 * grossSalary;
    deduction = 0.03 * grossSalary;
    netSalary = grossSalary + allowance - deduction;

    printf("Gross Salary = %.2f\n", grossSalary);
    printf("Allowance (10%%) = %.2f\n", allowance);
    printf("Deduction (3%%) = %.2f\n", deduction);
    printf("Net Salary = %.2f\n", netSalary);

    return 0;
}
