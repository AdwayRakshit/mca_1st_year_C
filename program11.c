#include <stdio.h>

int main() {
    int num1, num2, max;

    printf("Name:Adway Mohan Rakshit MCA sec A roll 2");

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;

    printf("Maximum number is: %d\n", max);

    return 0;
}
