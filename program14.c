#include <stdio.h>

int main() {
    int num;
    printf("Name:Adway Mohan Rakshit MCA sec A roll 2");
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("%d is positive.\n", num);
    } else if (num < 0) {
        printf("%d is negative.\n", num);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
