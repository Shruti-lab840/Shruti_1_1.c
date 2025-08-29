#include <stdio.h>

int main()
{
    float H = 15, L = 6;   // Example values
    float area;

    area = (H * L) / 2;

    printf("Height = %.2f\n", H);
    printf("Base (Length) = %.2f\n", L);
    printf("Area of Triangle = %.2f\n", area);

    return 0;
}
