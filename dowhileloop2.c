#include <stdio.h>

int main() {
    int choice;
    do {
        printf("\nMenu:\n1. Hello\n2. Goodbye\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) printf("Hello!\n");
        else if (choice == 2) printf("Goodbye!\n");
    } while (choice != 3);
    
    printf("Program ended.\n");
    return 0;
}
