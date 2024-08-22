#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Name:Adway Mohan Rakshit MCA sec A roll 2\n");
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}
