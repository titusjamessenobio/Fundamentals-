#include <stdio.h>

int main() {
    int n = 5, fact = 1, i = 1;
    while (i <= n) {
        fact *= i;
        i++;
    }
    printf("Factorial of %d = %d\n", n, fact);
    return 0;
}
