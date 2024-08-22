#include <stdio.h>

int main() {
    float a, x, b, result;
    printf("Name:Adway Mohan Rakshit MCA sec A roll 2");
    
    printf("Enter the values for a, x, and b: ");
    scanf("%f %f %f", &a, &x, &b);
    
    if ((a * x - b) != 0) {
        result = (a * x + b) / (a * x - b);
        printf("The result is: %f\n", result);
    } else {
        printf("Division by zero error.\n");
    }

    return 0;
}

