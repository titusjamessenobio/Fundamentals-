#include <stdio.h>
int main() {
    int num;
    do {
        printf("Enter a number (-1 to stop): ");
        scanf("%d", &num);
        if(num != -1)
            printf("You entered: %d\n", num);
    } while(num != -1);
    return 0;
}