#include <stdio.h>
int main() {
    int num;
    for( ; ; ) {
        printf("Enter a number (-1 to stop): ");
        scanf("%d", &num);
        if(num == -1) break;
        printf("You entered: %d\n", num);
    }
    return 0;
}