#include <stdio.h>

int main() {
    char name[50], gender[10], address[100], email[50];
    char nationality[30], hobby[30], course[30];
    int age, yearLevel;
    long long phone;
    float height, weight;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar();

    printf("Enter your gender: ");
    fgets(gender, sizeof(gender), stdin);

    printf("Enter your address: ");
    fgets(address, sizeof(address), stdin);

    printf("Enter your email: ");
    fgets(email, sizeof(email), stdin);

    printf("Enter your phone number: ");
    scanf("%lld", &phone);
    getchar();

    printf("Enter your nationality: ");
    fgets(nationality, sizeof(nationality), stdin);

    printf("Enter your favorite hobby: ");
    fgets(hobby, sizeof(hobby), stdin);

    printf("Enter your height (in cm): ");
    scanf("%f", &height);
    getchar();

    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);
    getchar();

    printf("Enter your course: ");
    fgets(course, sizeof(course), stdin);

    printf("Enter your year level: ");
    scanf("%d", &yearLevel);

    printf("\n--- USER INFORMATION ---\n");
    printf("Full Name     : %s", name);
    printf("Age           : %d\n", age);
    printf("Gender        : %s", gender);
    printf("Address       : %s", address);
    printf("Email         : %s", email);
    printf("Phone Number  : %lld\n", phone);
    printf("Nationality   : %s", nationality);
    printf("Hobby         : %s", hobby);
    printf("Height        : %.2f cm\n", height);
    printf("Weight        : %.2f kg\n", weight);
    printf("Course        : %s", course);
    printf("Year Level    : %d\n", yearLevel);

    return 0;
}
