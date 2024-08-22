#include <stdio.h>

int main() {
    int num1, num2, num3, sum;
    float average;
    printf("Name:Adway Mohan Rakshit MCA sec A roll 2");
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    average = sum / 3.0;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
