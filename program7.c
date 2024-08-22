#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, sum = 0, digit;
    printf("Name:Adway Mohan Rakshit MCA sec A roll 2");
    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num;
    while(temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if(sum == num) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}

