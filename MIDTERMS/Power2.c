#include <stdio.h>

int main() {
    int power = 0;
    long power_of_2 = 1;

    printf("Powers of 2 up to 512:\n");
    // titus with the power of everything

    for (power = 0; power_of_2 <= 512; power++) {
        printf("2^%d = %ld\n", power, power_of_2);
        power_of_2 *= 2;
    }

    return 0;
}