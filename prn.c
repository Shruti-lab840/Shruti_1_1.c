#include <stdio.h>

int main() {
    float P = 5000;
    float R = 2;
    float N = 4;
    float I;


    I = (P * R * N) / 100;


    printf("Principal = %.2f\n", P);
    printf("Rate of Interest = %.2f\n", R);
    printf("Time = %.2f years\n", N);
    printf("Simple Interest (I) = %.2f\n", I);

    return 0;
}
