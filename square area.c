#include <stdio.h>

int main()
{
    float L = 8;
    float area, perimeter;

    area = L * L;
    perimeter = 4 * L;

    printf("Side Length = %.2f\n", L);
    printf("Area of Square = %.2f\n", area);
    printf("Perimeter of Square = %.2f\n", perimeter);

    return 0;
}
