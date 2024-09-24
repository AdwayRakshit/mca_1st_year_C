#include <stdio.h>

int sum(int n) {
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}

int main() {
    int result = sum(20);
    printf("Name:Adway Mohan Rakshit MCA sec A roll 2");
    printf("Sum of the first 20 natural numbers: %d\n", result);
    return 0;
}
