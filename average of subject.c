#include <stdio.h>

int main()
{
    int Maths = 80, English = 85, chemistry = 75;
    int total;
    float average;

    total = Maths + English + chemistry;
    average = total / 3.0;

    printf("Marks: %d, %d, %d\n", Maths, English, chemistry);
    printf("Total = %d\n", total);
    printf("Average = %.2f\n", average);

    return 0;
}
