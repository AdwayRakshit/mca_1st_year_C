#include <stdio.h>

int main() {
    int n, i, decimal = 0, base = 1;
    printf("Enter the number of bits in the binary number: ");
    scanf("%d", &n);
    int binary[n];
    printf("Enter the binary number: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &binary[i]);
    }
    for (i = n - 1; i >= 0; i--) {
        decimal += binary[i] * base;
        base *= 2;
    }
    printf("The decimal equivalent is: %d", decimal);
    return 0;
}