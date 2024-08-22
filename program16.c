#include <stdio.h>

int main() {
    int num;
    printf("Name:Adway Mohan Rakshit MCA sec A roll 2");
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);

    return 0;
}
