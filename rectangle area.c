#include <stdio.h>

int main()
{
    int L = 14, B = 2;   // Example values
    float a, p;

    a = L * B;
    p = 2 * (L + B);

    printf("Length = %.2f\n", L);
    printf("Breadth = %.2f\n", B);
    printf("Area of Rectangle = %.2f\n", a);
    printf("Perimeter of Rectangle = %.2f\n", p);

    return 0;
}
