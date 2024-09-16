#include <stdio.h>

void reverseNumber(int num) {
    if (num == 0) 
        return;
    printf("%d", num % 10);
    reverseNumber(num / 10);
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("-");
        number = -number;
    }
    reverseNumber(number);
    return 0;
}
