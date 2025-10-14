#include <stdio.h>

int main() {
    printf("Even numbers between 0 and 10:\n");
    // Start at 0, step by 2
    for (int i = 0; i <= 10; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}