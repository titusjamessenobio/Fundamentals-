#include <stdio.h>

int main() {
    int n;
    printf("Enter numbers (0 to stop):\n");
    scanf("%d", &n);
    while (n != 0) {
        printf("You entered: %d\n", n);
        scanf("%d", &n);
    }
    printf("Loop ended.\n");
    return 0;
}
