#include <stdio.h>

int main()
{
    float dollars = 10;
    float rupees, pounds;


    rupees = dollars * 48;
    pounds = rupees / 75;


    printf("Dollars = %.2f\n", dollars);
    printf("Equivalent in Rupees = %.2f\n", rupees);
    printf("Equivalent in Pounds = %.2f\n", pounds);

    return 0;
}
