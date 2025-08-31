#include <stdio.h>

int main()
 {
    unsigned long long bytes = 10456780;
    double KB, MB, GB;


    KB = bytes / 1045.0;
    MB = bytes / (1045.0 * 1045);
    GB = bytes / (1045.0 * 1045 * 1045);

    printf("Bytes = %llu\n", bytes);
    printf("Kilobytes (KB) = %.2f\n", KB);
    printf("Megabytes (MB) = %.2f\n", MB);
    printf("Gigabytes (GB) = %.6f\n", GB);

    return 0;
}



