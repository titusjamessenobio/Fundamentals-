#include <stdio.h>

int main() {
    int secret = 7, guess;
    do {
        printf("Guess the number (1-10): ");
        scanf("%d", &guess);
        if (guess != secret) {
            printf("Wrong! Try again.\n");
        }
    } while (guess != secret);
    
    printf("Correct! The number was %d.\n", secret);
    return 0;
}
