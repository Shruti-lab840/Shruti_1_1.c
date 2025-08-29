#include <stdio.h>
int main()
{
    float gs = 3000;
    float discount, netSales;

    discount = 0.10 * gs;
    netSales = gs - discount;

    printf("gs = %.2f\n", gs);
    printf("Discount (10%%) = %.2f\n", discount);
    printf("Net Sales = %.2f\n", netSales);

    return 0;
}
