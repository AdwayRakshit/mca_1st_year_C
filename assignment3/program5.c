#include <stdio.h>

int main() {
    int n, i = 0, binary[32];

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    printf("Binary equivalent: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}