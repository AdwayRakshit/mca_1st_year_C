#include <stdio.h>

int find_max(int a, int b) {
    return (a > b) ? a : b;
}

int find_min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num1, num2;
        printf("Name:Adway Mohan Rakshit MCA sec A roll 2");
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int max = find_max(num1, num2);
    int min = find_min(num1, num2);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
