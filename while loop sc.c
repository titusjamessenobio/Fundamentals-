#include <stdio.h>
int main() {
    int num;
    printf("Enter a number (-1 to stop): ");
    scanf("%d", &num);

    while(num != -1) {
        printf("You entered: %d\n", num);
        scanf("%d", &num);
    }
    return 0;
}