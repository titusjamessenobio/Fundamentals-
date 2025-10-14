#include <stdio.h>

int main() {
    printf("Odd numbers between 0 and 10:\n");
    // Start at 1, step by 2
    for (int i = 1; i <= 10; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}