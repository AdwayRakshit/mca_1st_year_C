#include <stdio.h>

int main() {
    int choice;
    float temperature, result;
    printf("Name:Adway Mohan Rakshit MCA sec A roll 2");

    printf("Choose conversion type:\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        result = (temperature * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", result);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        result = (temperature - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", result);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}

