#include <stdio.h>

int main() {
    char choice;
    float vegetablePrice = 54.5;
    float fruitPrice;
    float milkPrice = 90.0;
    float soapPrice = 29.45;
    float shampooPrice = 140.0;
    float vegetableQty, fruitQty, milkQty, soapQty, shampooQty;
    float total, cash, change;

    do {
        total = 0;

        printf("\n=== Welcome to the Store ===\n");
        printf("Please enter the quantity you want to buy for each item.\n");
        printf("If you don't want to buy an item, just enter 0.\n\n");

        printf("------ PRICE LIST ------\n");
        printf("1. Vegetable - P54.50 / kg\n");
        printf("2. Fruits    - P120.00 to P150.00 / kg (you choose the price)\n");
        printf("3. Milk      - P90.00 / pack\n");
        printf("4. Soap      - P29.45 / bar\n");
        printf("5. Shampoo & Conditioner - P140.00 / bottle\n");
        printf("-------------------------\n\n");

        printf("Vegetable (kg): ");
        scanf("%f", &vegetableQty);
        total += vegetableQty * vegetablePrice;

        printf("Fruits - Enter price per kg (120-150): ");
        scanf("%f", &fruitPrice);
        printf("Fruits - Enter quantity (kg): ");
        scanf("%f", &fruitQty);
        total += fruitQty * fruitPrice;

        printf("Milk (packs): ");
        scanf("%f", &milkQty);
        total += milkQty * milkPrice;

        printf("Soap (bars): ");
        scanf("%f", &soapQty);
        total += soapQty * soapPrice;

        printf("Shampoo & Conditioner (bottles): ");
        scanf("%f", &shampooQty);
        total += shampooQty * shampooPrice;

        printf("\n=== BILLING SUMMARY ===\n");
        printf("Total Purchase: P%.2f\n", total);

        printf("Enter your cash payment: P");
        scanf("%f", &cash);

        change = cash - total;
        if (change < 0) {
            printf("Insufficient cash! You need P%.2f more.\n", -change);
        } else {
            printf("Your change: P%.2f\n", change);
        }

        printf("\nDo you want to purchase again (Y/N)? ");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

    printf("\nThank you for shopping! Come again.\n");

    return 0;
}

