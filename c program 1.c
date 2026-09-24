#include <stdio.h>

int main() {
    float height;
    double bank_balance;
    char phone_number[20];

    // Get height
    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    // Get bank balance
    printf("Enter your bank balance (KSh): ");
    scanf("%lf", &bank_balance);

    // Get phone number
    printf("Enter your phone number: ");
    scanf("%19s", phone_number);

    // Display the information
    printf("\n===== YOUR DETAILS =====\n");
    printf("Height: %.2f meters\n", height);
    printf("Bank Balance: KSh %.2f\n", bank_balance);
    printf("Phone Number: %s\n", phone_number);

    return 0;
}